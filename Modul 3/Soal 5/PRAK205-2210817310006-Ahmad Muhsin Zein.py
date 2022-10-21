import math
a,b = input().split()
a =float(a)
b =float(b)
al=(b*b)-(a*a)
alas=math.sqrt(al)
k=a+b+alas
l=0.5*alas*a
print("Alas =", round(alas),"cm")
print("Tinggi =", round(a),"cm")
print("Keliling =", round(k),"cm")
print("Luas =", round(l),"cm^2\n")

a1= int(input())
b1= int(input())
al1=(b1*b1)-(a1*a1)
alas1=math.sqrt(al1)
k1=a1+b1+alas1
l1=0.5*alas1*a1
print("Alas =", round(alas1),"cm")
print("Tinggi =", round(a1),"cm")
print("Keliling =", round(k1),"cm")
print("Luas =", round(l1),"cm^2\n")