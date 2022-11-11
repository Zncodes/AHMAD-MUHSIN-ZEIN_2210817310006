def reverse(n):
    return n[::-1]
A,B = input().split()
A = reverse(A)
B = reverse(B)
C = str(int(A)+int(B))
print(int(reverse(C)))