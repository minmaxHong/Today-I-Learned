n = int(input())

positive = []
negative = []
sorted_positive = []
sorted_negative = []
zero = 0
one = 0
arr = []
for i in range(n):
    arr.append(int(input()))

for element in arr:
    if element == 0:
        zero += 1
    elif element == 1:
        one += 1
    elif element > 0:
        positive.append(element)
    else:
        negative.append(element)
        

sum = 0
sorted_positive = sorted(positive)
sorted_negative = sorted(negative, reverse=True)

# 양수 먼저
tmp_positive = []
if len(sorted_positive) == 1:
    sum += sorted_positive[0]
else:
    for num in sorted_positive[::-1]:
        tmp_positive.append(num)
        if len(tmp_positive) >= 2:
            tmp1 = tmp_positive.pop()
            tmp2 = tmp_positive.pop()
            
            sum += tmp1 * tmp2
    for num in tmp_positive:
        sum += num

# 음수 ~
tmp_negative = []
for num in sorted_negative[::-1]:
    tmp_negative.append(num)
    if len(tmp_negative) >= 2:
        tmp1 = tmp_negative.pop()
        tmp2 = tmp_negative.pop()
        
        sum += tmp1 * tmp2

if len(tmp_negative) > 0 and zero > 0:
    min_cnt = min(zero, len(tmp_negative))
    zero -= min_cnt
    tmp_negative.pop()
for i in tmp_negative:
    sum += i

print(sum + one)