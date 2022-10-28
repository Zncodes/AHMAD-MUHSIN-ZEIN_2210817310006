i = 0
while True:
    i = i + 1
    if(i>5):
        break
    a=int(input())
    if(a >= 1 and a <= 9):
        print("Satuan\n")
    elif(a < 1 and a > -1):
        print("nol\n")
    elif(a > 99):
        print("Anda menginput Melebihi Limit Bilangan\n")
    elif(a >= 20 and a <= 99):
        print("Puluhan\n")
    elif(a >= 11 and a <= 19):
        print("Belasan\n")