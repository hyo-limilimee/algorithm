#11720 숫자의 합

N = int(input())
number = input()
total = 0

for i in range(N) :
    total += int(number[i])

print(total)
