letras = ["","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"]
while True:
    try:
        result = []
        numero = input()
        size = len(numero)
        for i in range(0,size):
            if((ord(numero[i]) >= 48 and ord(numero[i])<=57) or numero[i]=='*' or numero[i]=='#'):
                result+= numero[i]
            else:
                for j in range(1,10):
                    if (numero[i]!='-' and (numero[i] in letras[j]) or (chr(ord(numero[i]) + 32) in letras[j])):
                        result+= str(j)
            
        size = len(result)
        for i in range(0,size):
            print(result[i],end="")
        print()

    except EOFError:
        break