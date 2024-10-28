import math

M, N = map(int, input().split())

prime_number = [0] * (N + 1)

for i in range(2, N + 1):
    prime_number[i] = i
    
for i in range(2, int(math.sqrt(N))+1):
    if prime_number[i] == 0:
        continue
    
    for j in range(i + i, N + 1, i):
        prime_number[j] = 0

for i in range(M, N+1):
    if prime_number[i] != 0:
        print(prime_number[i])