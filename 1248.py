def bin_search(elemento,ini, fim, lista):
    if(fim>=ini):
        mid = (fim+ini)//2
        if(elemento==lista[mid]):
            return mid
        elif(elemento>lista[mid]):
            return bin_search(elemento,mid+1,fim,lista)
        else:
            return bin_search(elemento,ini,mid-1,lista)
    else:
        return -1

def main():
    testes = int(input())
    for i in range(0,testes):
        dt = sorted(input())
        dieta = []
        s1 = len(dt)
        for i in range(0,s1):
            if(len(dieta)>0):
                if(bin_search(dt[i],0,len(dieta)-1,dieta)==-1):
                    dieta+=[dt[i]]
            else:
                dieta+=[dt[i]]
        cafe = input()
        almoco = input()
        s1 = len(cafe)
        a = 0
        for i in range(0,s1):
            pos = bin_search(cafe[i],0,len(dieta)-1,dieta)
            if(pos==-1):
                print("CHEATER",end = "")
                a = 1
                break
            else:
                dieta = dieta[:pos] + dieta[pos+1:]
            
        s1 = len(almoco)
        if(a==0):
            for i in range(0,s1):
                pos = bin_search(almoco[i],0,len(dieta)-1,dieta)
                if(pos==-1):
                    print("CHEATER",end = "")
                    a = 1
                    break
                else:
                    dieta = dieta[:pos] + dieta[pos+1:]
        s1 = len(dieta)
        if (a == 0):
            for i in range(0,s1):
                print(dieta[i],end = "")
        if(i+1!=testes):
            print()
main()