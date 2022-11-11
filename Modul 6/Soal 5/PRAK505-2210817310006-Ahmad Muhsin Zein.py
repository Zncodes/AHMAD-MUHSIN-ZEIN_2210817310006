def Biodata (tahunLahir, A, B) :
    tahun_sekarang = 2020
    umur = tahun_sekarang - tahunLahir
    print('\nPerkenalkan Nama Saya : '+ A)
    print("Umur Saya : %d" %(umur))
    print('Saya adalah Angkatan : ', tahun_sekarang)
    print('Asal Saya dari : '+ B)

tahunLahir = int(input())
A = str(input())
B = str(input())
Biodata(tahunLahir, A, B)