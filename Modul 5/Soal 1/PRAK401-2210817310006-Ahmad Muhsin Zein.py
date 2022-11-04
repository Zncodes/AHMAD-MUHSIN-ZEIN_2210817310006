angka, simbol = input().split()
angka = int(angka)
for i in range(1, 51):
    print(simbol, end=' ') if i % angka == 0 else print(i, end=' ')