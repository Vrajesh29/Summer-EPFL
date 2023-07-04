
# Note that this is not for the Mant Max case, obviously its easy to manually check for the Mant Max case from the data in the csv file.

import random
import pandas as pd
m = 6
e = 8
blockSize = 16

def generate_random_numbers(num_numbers, min_value, max_value):
    numbers = [random.randint(min_value, max_value) for _ in range(num_numbers)]
    return numbers

def save_lists_to_csv(lists, filename):
    data = {}


    for i, lst in enumerate(lists):
        data[f'Column{i + 1}'] = lst

    df = pd.DataFrame(data)

    # Multiply first two columns and store in a new column
    df['Column5'] = df['Column1'] * df['Column2']

    # Take XOR of third and fourth columns and store in a new column
    df['Column6'] = df['Column3'] ^ df['Column4']

    # Determine sign based on sixth column and store final result in seventh column
    df['Column7'] = df['Column5'] * df['Column6'].map(lambda x: -1 if x == 1 else 1)

    # Calculate the sum of elements in the seventh column
    sum_seventh_column = df['Column7'].sum()

    # Store the sum and its sign and magnitude in binary format
    sign_binary = bin(1 if sum_seventh_column < 0 else 0)[2:]
    magnitude_binary = bin(abs(sum_seventh_column))[2:]

    # Define two numbers with random values from 0 to 255
    number1 = random.randint(0, 2**e - 1)
    number2 = random.randint(0, 2**e - 1)

    # Calculate the sum of the two numbers
    sum_numbers = bin(number1 + number2 + len(magnitude_binary) - m)[2:].zfill(10)
    concatenated_binary_result = (sign_binary + sum_numbers[0:8] + magnitude_binary[0:m])
    final_result = int(sign_binary + sum_numbers[0:8] + magnitude_binary[0:m], 2)

    # Create a dictionary for the new row
    new_row = {}
    for i in range(len(lists)):
        new_row[f'Column{i + 1}'] = None
    new_row['Column5'] = df['Column5'].iloc[0]  # First value of Column5
    new_row['Column6'] = df['Column6'].iloc[0]  # First value of Column6
    new_row['Column7'] = df['Column7'].iloc[0]  # First value of Column7
    new_row['Column8'] = sum_numbers
    new_row['Column9'] = str(number1)
    new_row['Column10'] = str(number2)
    new_row['Column11'] = sign_binary
    new_row['Column12'] = magnitude_binary
    new_row['Column13'] = str(final_result)
    new_row['Column14'] = concatenated_binary_result

    # Append the new row to the DataFrame
    df = df._append(new_row, ignore_index=True)

    # Save the DataFrame to a CSV file
    df.to_csv(filename, index=False)

# Define the ranges for each list
ranges = [(0, 2**m - 1), (0, 2**m - 1), (0, 1), (0, 1)]

# Generate 4 lists of random numbers from the specified ranges
lists = []
for min_value, max_value in ranges:
    random_numbers = generate_random_numbers(blockSize, min_value, max_value)
    lists.append(random_numbers)

# Save the lists to a CSV file named "random_lists.csv" and perform the calculations
save_lists_to_csv(lists, 'random_lists.csv')










