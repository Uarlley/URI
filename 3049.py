B = float(input())
T = float(input())
total = 5600
if(T+B==160):
    M = total
elif(T==0 or T==160):
    M = (B*70)/2
elif(B==0 or B==160):
    M = (T*70)/2
else:
    M = (T+B)*70/2
if(M>total):
    print(1)
elif(M==total):
    print(0)
else:
    print(2)
