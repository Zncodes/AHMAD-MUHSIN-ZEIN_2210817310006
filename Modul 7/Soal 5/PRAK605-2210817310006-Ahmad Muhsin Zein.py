n = int(input())
matrix = [];matrix2 = [];matrixAB = []
print('Matriks A')
for i in range(n):
    k =  list(map(int, input().split()))
    matrix.append(k)
print('Matriks B')
for i in range(n):
    k =  list(map(int, input().split()))
    matrix2.append(k)
print('Matriks AXB')
for i in range(n):
    matrixAB.append([])
    for j in range(n):
        x = 0
        for k in range(n):
            x = x + matrix[i][k] * matrix2[k][j]
        matrixAB[i].append(x)
for isi in matrixAB:
    for k in isi :
        print(k, end=" ")
    print()