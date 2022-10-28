loop = 0
while True:
    loop = loop + 1
    if(loop>5):
        break
    d=int(input())
    h = (d%(86400*30))/86400
    j = (d%86400)/3600
    m = (d%3600)/60
    s = (d%60)
    if(h >= 1):
        print("%d hari %02d:%02d:%02d\n" %(h,j,m,s))
    else:
        print("%02d:%02d:%02d\n" %(j,m,s))