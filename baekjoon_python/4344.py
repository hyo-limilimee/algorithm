#4344 평균은 넘겠지

c = int(input())

for i in range(c) :
    score = list(map(int, input().split()))
    average = sum(score[1: ]) / score[0]
    count = 0

    for j in score[1: ] :
        if j > average:
            count += 1

    rate = count / score[0] * 100

    print('{:.3f}%'.format(rate))
            

    
