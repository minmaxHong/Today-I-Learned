N = int(input())

A = list(map(int, input().split()))
B = list(map(int, input().split()))

S = 0
A.sort(reverse=True)

for A_element in A[::-1]:
    max_B_element = max(B)
    S += A_element * max_B_element

    max_B_index = B.index(max(B))
    del B[max_B_index]
print(S)