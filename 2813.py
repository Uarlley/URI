def main():
    t = 0
    c = 0
    temt = 0
    temc = 0
    n = int(input())
    for i in range(0,n):
        tex = input()
        lista = tex.split()
        if(lista[0]=="chuva"):
            if(temc==0):
                c+=1
            else:
                temc-=1
            temt+=1
        if(lista[1]=="chuva"):
            if(temt ==0):
                t+=1
            else:
                temt-=1
            temc+=1
        del lista[:]
    print(c, t)
main()