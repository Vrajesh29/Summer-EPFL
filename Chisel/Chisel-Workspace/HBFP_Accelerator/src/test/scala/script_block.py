
import random
import pandas as pd


def generate_random_numbers(num_numbers, min_value, max_value):
    numbers = [random.randint(min_value, max_value) for _ in range(int(num_numbers))]
    return numbers


def save_lists_to_csv(filename):
    tensorSize = 16
    blockSize = 4
    df = pd.DataFrame()
    # df2 = pd.DataFrame()
    man_a = generate_random_numbers(tensorSize, 0, 63)
    man_b = generate_random_numbers(tensorSize, 0, 63)
    df['Column1'] = man_a
    df['Column2'] = man_b

    sign_a = generate_random_numbers(tensorSize, 0, 1)
    sign_b = generate_random_numbers(tensorSize, 0, 1)
    df['Column3'] = sign_a
    df['Column4'] = sign_b

    exp_a = generate_random_numbers(tensorSize/blockSize, 0, 255)
    exp_b = generate_random_numbers(tensorSize/blockSize, 0, 255)

    for i in range(int(tensorSize/blockSize)):
        df.at[i, 'Column5'] = str(exp_a[i])
        df.at[i, 'Column6'] = str(exp_b[i])

    # df.at[0, 'Column5'] = str(exp_a[0])
    # df.at[0, 'Column6'] = str(exp_b[0])
    # df.at[1, 'Column5'] = str(exp_a[1]
    # df.at[1, 'Column6'] = exp_b[1]
    # df.at[2, 'Column5'] = exp_a[2]
    # df.at[2, 'Column6'] = exp_b[2]
    # df.at[3, 'Column5'] = exp_a[3]
    # df.at[3, 'Column6'] = exp_b[3]
    exp_out = [exp_a[i] + exp_b[i] for i in range(int(tensorSize/blockSize))]


    

    
    sign_product = df['Column3'] ^ df['Column4']
    df['Column7'] = df['Column3'] ^ df['Column4']
    man_product = df['Column1'] * df['Column2']
    man_product = man_product * sign_product.map(lambda x: -1 if x == 1 else 1)
    df['Column8'] = (df['Column1'] * df['Column2']) * df['Column7'].map(lambda x: -1 if x == 1 else 1)

    man_partial_sum_list = []

    for i in range(int(tensorSize/blockSize)):
        man_partial_sum = sum(man_product[i*blockSize:i*blockSize+blockSize])
        man_partial_sum_list.append(man_partial_sum)

    # df['Column8'] = man_partial_sum_list
    max_exp_output = max(exp_out)
    exp_diff_list = [max_exp_output - x for x in exp_out]
    print(exp_diff_list)
    print(man_partial_sum_list)

    shifted_man = [num >>shift for num, shift in zip(man_partial_sum_list, exp_diff_list)]
    print(shifted_man)
    man_out = 0
    for value in shifted_man:
        if value == -1:
            man_out += 0
        else:
            man_out += value

    sign_out = 1 if man_out<0 else 0

    print(man_out)

    max_exp_out_final = bin((max_exp_output + len(bin(abs(man_out))[2:]) - 6))[2:] 
    print(max_exp_output)
    print(len(bin(abs(man_out))[2:]))
    print(max_exp_out_final)

    
    print(sign_out)
    exp_out_buffer = max_exp_out_final.zfill(10)

    result = str(int(bin(sign_out)[2:] + exp_out_buffer[0:8] + bin(abs(man_out))[2:8].zfill(6), 2))

    # result_readable = int(result, 2)

    df.at[0, 'Column9'] = result
    # df['Column10'] = result_readable

    df.to_csv(filename, index=False)
    # df2.to_csv(filename, index=False)


save_lists_to_csv('random_lists_block.csv')





# This one if for MANT MAX case
    
# import random
# import pandas as pd
# import numpy as np


# def generate_random_numbers(num_numbers, min_value, max_value):
#     numbers = [random.randint(min_value, max_value) for _ in range(int(num_numbers))]
#     return numbers


# def save_lists_to_csv(filename):
#     tensorSize = 1024
#     blockSize = 64
#     df = pd.DataFrame()
#     # df2 = pd.DataFrame()
#     man_a = generate_random_numbers(tensorSize, 0, 63)
#     man_b = generate_random_numbers(tensorSize, 0, 63)
#     df['Column1'] = man_a
#     df['Column2'] = man_b

#     sign_a = generate_random_numbers(tensorSize, 0, 1)
#     sign_b = generate_random_numbers(tensorSize, 0, 1)
#     df['Column3'] = sign_a
#     df['Column4'] = sign_b

#     exp_a = generate_random_numbers(tensorSize/blockSize, 0, 255)
#     exp_b = generate_random_numbers(tensorSize/blockSize, 0, 255)

#     for i in range(int(tensorSize/blockSize)):
#         df.at[i, 'Column5'] = str(exp_a[i])
#         df.at[i, 'Column6'] = str(exp_b[i])

#     # df.at[0, 'Column5'] = str(exp_a[0])
#     # df.at[0, 'Column6'] = str(exp_b[0])
#     # df.at[1, 'Column5'] = str(exp_a[1]
#     # df.at[1, 'Column6'] = exp_b[1]
#     # df.at[2, 'Column5'] = exp_a[2]
#     # df.at[2, 'Column6'] = exp_b[2]
#     # df.at[3, 'Column5'] = exp_a[3]
#     # df.at[3, 'Column6'] = exp_b[3]
#     exp_out = [exp_a[i] + exp_b[i] for i in range(int(tensorSize/blockSize))]


    

    
#     sign_product = df['Column3'] ^ df['Column4']
#     df['Column7'] = df['Column3'] ^ df['Column4']
#     # man_product = 31 if df['Column1'] * df['Column2']>31 else df['Column1'] * df['Column2']
#     man_product = np.where((df['Column1'] * df['Column2']) > 63, 63, df['Column1'] * df['Column2'])
#     man_product = man_product * sign_product.map(lambda x: -1 if x == 1 else 1)
#     df['Column8'] = (df['Column1'] * df['Column2']) * df['Column7'].map(lambda x: -1 if x == 1 else 1) # IGNORE

#     man_partial_sum_list = []

#     for i in range(int(tensorSize/blockSize)):
#         man_partial_sum = sum(man_product[i*blockSize:i*blockSize+blockSize])
#         if (man_partial_sum)>63:
#             man_partial_sum_list.append(63)
#         elif man_partial_sum < -63:
#             man_partial_sum_list.append(-63)
#         else:
#             man_partial_sum_list.append(man_partial_sum)

#     # df['Column8'] = man_partial_sum_list
#     max_exp_output = max(exp_out)
#     exp_diff_list = [max_exp_output - x for x in exp_out]
#     print(exp_diff_list)
#     print(man_partial_sum_list)

#     shifted_man = [num >>shift for num, shift in zip(man_partial_sum_list, exp_diff_list)]
#     print(shifted_man)
#     man_out = 0
#     for value in shifted_man:
#         if value == -1:
#             man_out += 0
#         else:
#             man_out += value

#     sign_out = 1 if man_out<0 else 0

#     man_out = 63 if abs(man_out)>63 else abs(man_out)     # Comment it out if you are NOT testing for MANT MAX case
#     print(man_out)

#     max_exp_out_final = bin((max_exp_output + len(bin(abs(man_out))[2:]) - 6))[2:] 
#     print(max_exp_output)
#     print(len(bin(abs(man_out))[2:]))
#     print(max_exp_out_final)

    
#     print(sign_out)
#     exp_out_buffer = max_exp_out_final.zfill(10)

#     #result = str(int(bin(sign_out)[2:] + exp_out_buffer[0:8] + bin(abs(man_out))[2:7].zfill(5), 2))
#     result =  str(int(bin(sign_out)[2:] + bin(max_exp_output)[2:].zfill(9)[0:8] + bin(abs(man_out))[2:8].zfill(6), 2))       # This is for the MANT MAX case and above one is for the normal case

#     # result_readable = int(result, 2)

#     df.at[0, 'Column9'] = result
#     # df['Column10'] = result_readable

#     df.to_csv(filename, index=False)
#     # df2.to_csv(filename, index=False)


# save_lists_to_csv('random_lists_block.csv')