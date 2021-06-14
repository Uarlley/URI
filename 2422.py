def binarySearch(lista,ini,fim,chave):
    if (ini > fim):
        return -1
    if(ini == fim and lista[ini] == chave):
        return ini
    if(fim > ini):
        mid = (fim+ini)//2
        if(chave > lista[mid]):
            return binarySearch(lista, mid+1,fim,chave)
        elif(chave < lista[mid]):
            return binarySearch(lista, ini, mid-1,chave)
        else:
            return mid
    return -1


def main():
    n = int(input())
    casas = [0]*n
    for i in range(0,n):
        casas[i] = int(input())
    
    soma = int(input())
    for i in range(0,n):
        n1 = casas[i]
        n2 = soma - casas[i]
        if(binarySearch(casas,0,n-1,n2)!=-1):
            print(n1,n2)
            break
main()