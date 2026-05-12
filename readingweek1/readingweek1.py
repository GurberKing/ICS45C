def swap(val1, val2):
    return val2, val1

num1 = 2
num2 = 3

num1, num2 = swap(num1, num2)
print(num1, num2)

num1, num2 = num2, num1
print(num1, num2)