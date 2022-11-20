a = int(input())
matrix = []
x = list(map(int, input().split()))
for i in range(a):
    matrix.append(x[i])
    print(matrix[i]*(i+1), end =" ")
print()