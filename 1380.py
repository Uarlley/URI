def resto(n):
    size = len(n)
    num = 0
    i = 0
    while(i<size):
        num = num*10 + int(n[i])
        num = num%1500
        i+=1
    return num%1500

lst = [0,1]
for i in range(2,1501):
    lst += [(lst[i-1] + lst[i-2])%1000]
k = int(input())
for i in range(0,k):
    n = input()
    r = resto(n)
    num = lst[r]
    print("{0:03d}".format(num))

