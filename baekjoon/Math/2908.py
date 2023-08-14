import sys

def convertNum(N):
    hundreds = N // 100
    tens = (N - hundreds * 100) // 10
    ones = N - hundreds * 100 - tens * 10
    return (ones * 100 + tens * 10 + hundreds)

num1, num2 = map(int, input().split())

print(num1)
print(num2)

if newN1 > newN2:
    print(newN1)
else:
    print(newN2)
