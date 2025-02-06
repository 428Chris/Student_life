# Input: size of the triangle
n = int(input("Enter the size of the triangle: "))

# Outer loop for rows
i = 1
while i <= n:
    # Inner loop for numbers in each row
    j = 1
    while j <= i:
        print(j, end=" ")  # Print numbers in the same row
        j += 1
    print()  # Move to the next row
    i += 1
