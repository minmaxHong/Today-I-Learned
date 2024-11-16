import sys

input = sys.stdin.readline

H, W, N, M = map(int, input().split())

cnt = ((W + M) // (M + 1)) * ((H + N) // (N + 1))
        
print(cnt) 