def main():
    casos = int(input())
    valor=0
    textos=[]
    for i in range(0,casos):
        q=int(input())
        for j in range(0,q):
            textos+= [str(input())]
            
        valor = posicao(textos)
        print(valor)
        valor = 0
        textos=[]

def posicao(textos):
    i=0
    j=0
    soma=0
    alfabeto="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    for i in range(0,len(textos)):
        frase = textos[i]
        for j in range(0,len(frase)):
            char = frase[j]
            soma += j + i + alfabeto.find(char)
    return soma

main()



