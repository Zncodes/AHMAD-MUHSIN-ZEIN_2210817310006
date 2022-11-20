i=0;j=0
asli = input();palsu = input()
kode = len(asli);pesan = len(palsu)
if kode != pesan :
    print('panjang Kalimat Berbeda, Pesan Palsu')
else :
    for x in range(kode):
        if(asli[x]==palsu[x]):
            if (asli[x] == ' '):
                print(" ", end = " ")
            else:
                print("*", end = " ")
                i += 1
        else :
            print("#",end=" ")
            j += 1
    print("\n* = ",i)
    print("# = ",j)
    if(i > j):
        print("Pesan Asli")
    else:
        print("Pesan Palsu")