# 1065 한수
"""
#함수 미사용 ver.

N = int(input())

hansu = 0

for i in range(1, N + 1) :
    number = list(map(int, str(i)))

    if i < 100 :
        hansu += 1

    elif number[0] - number[1] == number[1] - number[2] :
        hansu += 1

print(hansu)
"""
# 함수 사용 ver.

def hansu(N): #함수 정의할 때 공백 쓰지 않기!
    count = 0

    for i in range(1, N + 1) :
        number = list(map(int, str(i)))

        if i < 100 :
            count += 1

        elif number[0] - number[1] == number[1] -number[2] :
            count += 1

    return count

N = int(input())
print(hansu(N))

