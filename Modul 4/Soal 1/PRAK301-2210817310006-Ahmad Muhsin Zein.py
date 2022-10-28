loop = 0
while True:
    loop = loop + 1
    if(loop>3):
        break 
    a,b = input().split()
    if (a<b) :
        print(a,b,"\n")
    else :
        print(b,a,"\n")
    