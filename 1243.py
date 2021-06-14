def main():
    tam=0
    total = 0
    pls = 0
    pontos = 0
    while True:
        try:
            alfabeto = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
            frase = input()
            palavras = frase.split()
            for i in range(0,len(palavras)):
                for j in range(0,len(palavras[i])):
                    if palavras[i][j] not in alfabeto:
                        if j+1 == len(palavras[i]) and palavras[i][j]=='.' and len(palavras[i])!=1:
                            tam+=1
                            pontos+=1
                    else:
                        tam+=1
                if(tam == len(palavras[i])):
                    pls+=1
                    total+=tam-pontos
                tam = 0
                pontos = 0
            if(pls ==0):
                print("250")
            if(pls!=0):
                if total/pls <4:
                    print("250")
                elif total/pls >=6:
                    print("1000")
                else:
                    print("500")
            total = 0
            pls = 0
            palavras = []
        except EOFError:
            break
main()