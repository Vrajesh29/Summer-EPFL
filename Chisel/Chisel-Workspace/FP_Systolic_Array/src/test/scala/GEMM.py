# A python script to generate testbench for the FP based systolic array accelerator.


import numpy as np
import pandas as pd

n = 16   # n*n systolic array
e = 8    # exponent bit-width
m = 5    # mantissa bit-width
sign1 = np.random.choice([0, 1], size=(n, n))
sign2 = np.random.choice([0, 1], size=(n, n))

exp1 = np.random.randint(0, 2**e - 1, size = (n, n))
exp2 = np.random.randint(0, 2**e - 1, size = (n, n))

man1 = np.random.randint(0, 2**m - 1, size = (n, n))
man2 = np.random.randint(0, 2**m - 1, size = (n, n))

sign_man1 = np.where(sign1 == 0, man1, -man1)
sign_man2 = np.where(sign2 == 0, man2, -man2)


def matrix_multiply(sign1, sign2, exp1, exp2, man1, man2):

    result_exp = np.zeros((n, n), dtype=int)
    result_sign = np.zeros((n, n), dtype=int)
    result_man = np.zeros((n, n), dtype=int)

    for i in range(n):
        for j in range(n):
            dot_product_exp = 0
            dot_product_sign_man = 0
            for k in range(n):
                if dot_product_exp < exp1[i, k] + exp2[k, j]:
                    dot_product_exp = 2**e - 1 if dot_product_exp > 2**e - 1 else dot_product_exp
                    exp_buffer = exp1[i, k] + exp2[k, j] if exp1[i, k] + exp2[k, j] < 2**e - 1 else 2**e - 1
                    mult_buffer = sign_man1[i, k] * sign_man2[k, j] if sign_man1[i, k] * sign_man2[k, j] < 2**m - 1 else 2**m - 1
                    mult_buffer = mult_buffer if mult_buffer > 1 - (2**m) else 1 - (2**m)
                    if dot_product_sign_man < 0:
                        dot_product_sign_man = mult_buffer - (abs(dot_product_sign_man) >> (exp_buffer - dot_product_exp))
                    else:
                        dot_product_sign_man = (abs(dot_product_sign_man) >> (exp_buffer - dot_product_exp)) + mult_buffer
                    if dot_product_sign_man > 2**m -1:
                        dot_product_sign_man = 2**m -1
                    elif dot_product_sign_man < -2**m + 1: 
                        dot_product_sign_man = -2**m + 1

                    dot_product_exp = exp1[i, k] + exp2[k, j]

                    dot_product_exp = dot_product_exp if dot_product_exp < 2**e - 1 else 2**e - 1
                    

                else:
                    dot_product_exp = 2**e - 1 if dot_product_exp >= 2**e - 1 else dot_product_exp
                    exp_buffer = exp1[i, k] + exp2[k, j] if exp1[i, k] + exp2[k, j] < 2**e - 1 else 2**e - 1
                    mult_buffer = sign_man1[i, k] * sign_man2[k, j] if sign_man1[i, k] * sign_man2[k, j] < 2**m - 1 else 2**m - 1
                    mult_buffer = mult_buffer if mult_buffer > -2**m + 1 else 2**m - 1
                    dot_product_exp = dot_product_exp
                    if dot_product_exp > 2**e - 1:
                        dot_product_exp = 2**e - 1
                    if sign_man1[i, k] * sign_man2[k, j] < 0:
                        dot_product_sign_man = dot_product_sign_man - (abs(mult_buffer) >> (dot_product_exp - exp_buffer))
                    else:
                        dot_product_sign_man = dot_product_sign_man + (abs(mult_buffer) >> (dot_product_exp - exp_buffer))
                    
                    if dot_product_sign_man > 2**m -1:
                            dot_product_sign_man = 2**m -1
                    elif dot_product_sign_man < -2**m + 1: 
                            dot_product_sign_man = -2**m + 1


            result_exp[i, j] = dot_product_exp
            if dot_product_sign_man < 0:
                result_sign[i, j] = 1
            else:
                result_sign[i, j] = 0
            if abs(dot_product_sign_man) >= 2**m-1:
                result_man[i, j] = 2**m-1
            else:
                result_man[i, j] = abs(dot_product_sign_man)

    return result_exp, result_sign, result_man

result_exp, result_sign, result_man = matrix_multiply(sign1, sign2, exp1, exp2, man1, man2)


## Kindly be careful of the indexing of second matrix while accessing elements when input is in Queue format. We need to interchange i and j in testbench.
data = {
    'Sign (Input Matrix 1)': sign1.flatten(),
    'Sign (Input Matrix 2)': sign2.flatten(),
    'Sign (Output Matrix)': result_sign.flatten(),
    'Exponent (Input Matrix 1)': exp1.flatten(),
    'Exponent (Input Matrix 2)': exp2.flatten(),
    'Exponent (Output Matrix)': result_exp.flatten(),
    'Mantissa (Input Matrix 1)': man1.flatten(),
    'Mantissa (Input Matrix 2)': man2.flatten(),
    'Mantissa (Output Matrix)': result_man.flatten(),
}

df = pd.DataFrame(data)

# Save DataFrame to CSV file
df.to_csv('FP_Systolic_Array.csv', index=False)
