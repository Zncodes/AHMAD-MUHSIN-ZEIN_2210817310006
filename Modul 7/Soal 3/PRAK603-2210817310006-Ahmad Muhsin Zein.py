a,b = map(int, input().split())
matrix = [];matrix2 = []
if a == b:
    x = list(map(int, input().split()))
    x1 = list(map(int, input().split()))
    for i in range(a):
        matrix.append(x[i])
    for i in range(b):
        matrix2.append(x1[i])
    for i in range(a) :
        hasil = matrix[i]*matrix2[i]
        print(hasil, end = " ")
    print()
else :
    print('Jumlah Tidak Sama')