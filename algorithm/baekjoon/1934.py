import math

case = int(input())
result = []
for _ in range(case):
    a, b = map(int, input().split())
    gcd = math.gcd(a, b)
    result.append(gcd*(a/gcd)*(b/gcd))

for i in result:
    print(int(i))