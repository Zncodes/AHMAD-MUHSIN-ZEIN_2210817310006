def maksimal (a, b):
    if a > b : return a
    else : return b

def minimal (a, b) :
    if a < b : return a
    else : return b

batas = 0; maks = -100000; minim = 100000
bilangan = int(input())
while batas < bilangan :
    nilai = map(int,input().split())
    for angka in nilai :
        maks = maksimal(maks, angka)
        minim = minimal(minim, angka)
        batas += 1
print(maks, minim)