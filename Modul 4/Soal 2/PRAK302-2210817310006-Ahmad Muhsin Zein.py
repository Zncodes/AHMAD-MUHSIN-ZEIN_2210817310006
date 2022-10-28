u = 0
while True:
    u = u + 1
    if(u>5):
        break
    a= int(input())
    if(a >= 80 ):
        print("A\n")
    elif(a >= 70 and a<= 79):
        print("B\n")
    elif(a >= 60 and a<= 69):
        print("C\n")
    elif(a >= 50 and a<= 59):
        print("D\n")      
    elif(a < 50):
        print("E\n")
    