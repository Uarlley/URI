def main():
    while(True):
        carry = 0
        texto = str(input())
        if(texto == "0 0"):
            break
        tex = texto.split()
        t1 = len(tex[0])
        t2 = len(tex[1])
        l1 = []
        l2 = []
        for i in range(0,t1):
            l1 += [int(tex[0][i])]
        for i in range(0,t2):
            l2+= [int(tex[1][i])]
        i = min(t1,t2)
        if(len(l1)>len(l2)):
            while(i<t1):
                l2 = [0] + l2
                i+=1
        else:
            while(i<t2):
                l1 = [0] + l1
                i+=1
        for i in range(i-1,-1,-1):
            a = l1[i] + l2[i]
            if(a>=10):
                carry+=1
                if(i!=0):
                    l1[i-1] += 1
        del l1[:]
        del l2[:]
        if(carry>1): 
            print("{} carry operations.".format(carry))
        elif(carry==0):
            print("No carry operation.")
        else: 
            print("1 carry operation.")

main()