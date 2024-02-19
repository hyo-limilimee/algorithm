#문제 10818
#N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.

N = int(input())
A = list(map(int, input().split()))

max = A[0]
min = A[0]

for i in A[1: ]:
    if i > max:
        max = i
    elif i < min:
        min = i
print(min, max)
