angka1, angka2 = input().split()
angka1 = int(angka1)
angka2 = int(angka2)
if angka1 < angka2:
    for i in range(angka1, angka2):
        print(angka1, angka2, end=' - ')
        angka1 += 1
        angka2 -= 1
        continue
    print(angka1, angka2, end='  ')
    angka1 += 1
    angka2 -= 1
else:
    if angka1 > angka2:
        n = angka1
        n1 = angka2
        for i in range(angka2, angka1):
            print(angka1, angka2, end= ' - ')
            angka1 -= 1
            angka2 += 1
            if angka1 % n1 == 1 :
                break
    if angka1 < angka2:
        for i in range(angka1, angka2):
            print(angka1, angka2, end=' - ')
            angka1 -= 1
            angka2 += 1
            break
        print(angka1, angka2, end= ' ')
        angka1 -= 1
        angka2 += 1