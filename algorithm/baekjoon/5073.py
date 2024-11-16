answer = []
while True:
    num_list = list(map(int, input().split()))
    cnt = 0
    flag = False
    for element in num_list:
        if element == 0:
            cnt == 3
            flag = True
            break
    if flag:
        break
    
    sorted_num_list = sorted(num_list)
    
    min_val = num_list[0]
    median_val = num_list[1]
    max_val = num_list[2]
    
    if max_val >=  min_val + median_val:
        answer.append('Invalid')
    elif min_val == max_val and min_val == median_val:
        answer.append('Equilateral')
    elif min_val == max_val or min_val == median_val or median_val == max_val:
        answer.append('Isosceles')
    else:
        answer.append('Scalene')
        
for i in answer:
    print(i)