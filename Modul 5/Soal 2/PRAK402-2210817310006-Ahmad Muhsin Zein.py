angka = int(input())
for a in range(1, angka + 1) :
    if (a % 2 == 1) :
        if a != angka :
            print(a, end=' ')
        else :
            print(a)
    elif (a % 2 == 0) and a == angka :
        print()
b = angka 
while b > 0 :
    if (b % 2 == 0) :
        print(b, end=' ') ; b -= 2
    else : b -= 1