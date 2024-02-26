#2675 문자열 반복

T = int(input())

for i in range(T) :
    R, S = input().split()
    text = ""
    for i in S :
        text += int(R) * i
    print(text)
        
