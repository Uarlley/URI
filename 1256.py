def main():
    testes = int(input())
    for i in range(0,testes):
        hashtable = [[]]
        en1 = input()
        en2 = en1.split()
        size = int(en2[0])
        qnt = int(en2[1])
        for j in range(0,size):
            hashtable +=[[]]
        en1 = input()
        en2 = en1.split()
        for j in range(0,qnt):
            hashtable[int(en2[j])%size]+=[int(en2[j])]
        for j in range(0,size):
            tam = len(hashtable[j])
            print(j,"-> ",end = "")
            for k in range(0,tam):
                if(k==0):
                    print(hashtable[j][k],end = "")
                else:
                    print(" ->",hashtable[j][k],end = "")
                if(k+1==tam):
                    print(" -> ",end= "")
            print("\\")
        if(i+1!=testes):
            print()




main()