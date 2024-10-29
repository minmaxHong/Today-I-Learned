import math

A, B = map(int, input().split())
gcd = math.gcd(A, B)

while gcd > 0:
    print("1", end="")
    gcd -=1