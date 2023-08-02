import numpy as np
import pandas as pd

blocksize = 8
n = 8 
e = 8
m = 6
sign1 = np.random.choice([0, 1], size=(n, n * blocksize))
sign2 = np.random.choice([0, 1], size=(n, n * blocksize))

exp1 = np.random.randint(0, 2**e - 1, size = (n, n))
exp2 = np.random.randint(0, 2**e - 1, size = (n, n))

man1 = np.random.randint(0, 2**m - 1, size = (n, n * blocksize))
man2 = np.random.randint(0, 2**m - 1, size = (n, n * blocksize))

sign_man1 = np.where(sign1 == 0, man1, -man1)
sign_man2 = np.where(sign2 == 0, man2, -man2)


def matrix_multiply(sign1, sign2, exp1, exp2, man1, man2):

    result_sign_man_mac = np.zeros((n, n), dtype=int) 
    result_exp_mac = np.zeros((n, n), dtype=int)
    result_man = np.zeros((n, n), dtype=int)
    result_sign = np.zeros((n, n), dtype=int)

    for i in range(n):
        for j in range(n):
            for k in range(n):
                exp_sum = exp1[i][k] + exp2[k][j] if (exp1[i][k] + exp2[k][j] < 2**e - 1) else 2**e - 1
                exp_difference = abs(exp_sum - result_exp_mac[i][j])
                
                block_product = (sign_man1[i][k*blocksize : (k+1)*blocksize] * sign_man2[k][j*blocksize : (j+1)*blocksize])
                block_product = [min(element, 2**m - 1) for element in block_product]
                block_product = [max(element, -2**m + 1) for element in block_product]
                block_product_sum = np.sum(block_product)
                block_product_sum = block_product_sum if (block_product_sum < 2**m - 1) else 2**m - 1
                block_product_sum = block_product_sum if (block_product_sum > -2**m+1) else -2**m + 1
                
                if exp_sum > result_exp_mac[i][j]:
                    if result_sign_man_mac[i][j] < 0:
                        result_sign_man_mac[i][j] = block_product_sum - (abs(result_sign_man_mac[i][j]) >> exp_difference)
                    else:
                        result_sign_man_mac[i][j] = block_product_sum + (abs(result_sign_man_mac[i][j]) >> exp_difference)

                else:
                    if block_product_sum < 0:
                        result_sign_man_mac[i][j] = result_sign_man_mac[i][j] - (abs(block_product_sum) >> exp_difference)
                    else:
                        result_sign_man_mac[i][j] = result_sign_man_mac[i][j] + (abs(block_product_sum) >> exp_difference)

                result_sign_man_mac[i][j] = min(result_sign_man_mac[i][j], 2**m - 1)
                result_sign_man_mac[i][j] = max(result_sign_man_mac[i][j], -2**m + 1)

                result_exp_mac[i][j] = max(result_exp_mac[i][j], exp_sum)
                result_exp_mac[i][j] = result_exp_mac[i][j] if (result_exp_mac[i][j] < 2**e - 1) else 2**e - 1

                result_man[i][j] = abs(result_sign_man_mac[i][j])
                result_sign[i][j] = 1 if (result_sign_man_mac[i][j] < 0) else 0

    return result_exp_mac, result_sign, result_man


result_exp, result_sign, result_man = matrix_multiply(sign1, sign2, exp1, exp2, man1, man2)


## Kindly be careful of the indexing of second matrix while accessing elements when input is in Queue format. We need to interchange i and j in testbench.
data1 = {
    'Sign (Input Matrix 1)': sign1.flatten(),
    'Sign (Input Matrix 2)': sign2.flatten(),
    'Mantissa (Input Matrix 1)': man1.flatten(),
    'Mantissa (Input Matrix 2)': man2.flatten(),
}

data2 = {
    'Exponent (Input Matrix 1)': exp1.flatten(),
    'Exponent (Input Matrix 2)': exp2.flatten(),
    'Sign (Output Matrix)': result_sign.flatten(),
    'Exponent (Output Matrix)': result_exp.flatten(),
    'Mantissa (Output Matrix)': result_man.flatten(),
}

df1 = pd.DataFrame(data1)
df2 = pd.DataFrame(data2)

# Save DataFrame to CSV file
df1.to_csv('HBFP_Systolic_Array1.csv', index=False)
df2.to_csv('HBFP_Systolic_Array2.csv', index=False)