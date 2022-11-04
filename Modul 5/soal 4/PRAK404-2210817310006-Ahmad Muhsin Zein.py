while True:
    print("Pilih Program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit")
    menu = int(input("Masukkan Pilihan: "))
    if menu == 5:
        print('Terimakasih, telah menggunakan kalkulator Zein')
        break
    elif menu > 5 or menu <= 0:
        print('Input anda salah, silahkan coba lagi\n')
        continue
    else : 
        nilai1 = float(input("Masukkan nilai pertama: "))
        nilai2 = float(input("Masukkan nilai kedua: "))
        if menu == 1:
            print('Hasil pertambahan antara %.2f dengan %.2f adalah %.2f '%(nilai1, nilai2, nilai1 + nilai2))
        elif menu == 2:
            print('Hasil pengurangan antara %.2f dengan %.2f adalah %.2f '%(nilai1, nilai2, nilai1 - nilai2))
        elif menu == 3:
            print('Hasil perkalian antara %.2f dengan %.2f adalah %.2f '%(nilai1, nilai2, nilai1 * nilai2))
        elif menu == 4:
            print('Hasil pembagian antara %.2f dengan %.2f adalah %.2f '%(nilai1, nilai2, nilai1 / nilai2))