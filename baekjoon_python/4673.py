#4673 셀프 넘버

def d(num):
    self_num = num
    
    while num != 0 :
        self_num += (num % 10)  # 39 + 9
        num //= 10              # 3 -> 39 + 9 + 3 = 51
    return self_num     

result = []

for i in list(range(1, 10001)) :
    result.append(d(i))

    if i not in result :
        print(i)
