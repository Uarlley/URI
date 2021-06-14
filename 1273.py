def maio(strings):
    maior = len(strings[0])
    for i in range(1,len(strings)):
        if len(strings[i])>maior:
            maior = len(strings[i])

    return maior

def main():
    cont = 0
    strings = []
    while True:
        t = int(input())
        if t==0:
            break
        if cont ==1:
            print()
        for i in range(0,t):
            nome =  input()
            strings+=[nome]

        bigger = maio(strings)
        for i in range(0,len(strings)):
            for j in range(0,bigger- len(strings[i])):
                print(" ",end = "")
            print(strings[i])
        strings = []
        cont = 1

main()