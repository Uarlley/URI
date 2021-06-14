import re
def main():
    while(True):
        try:
            tag = input()
            replace = input()
            texto = input()
            size = len(texto)
            i = 0
            while(i<size):
                if(texto[i]=='<'):
                    j = i+1
                    while(j<size and texto[j]!='>'):
                        j+=1
                    if(j<size and texto[j] == '>'):
                        #print(texto[i:j+1])
                        print(re.sub(tag,replace,texto[i:j+1],flags = re.I),end = "")
                        i = j
                    else:
                        print(texto[i],end="")
                else:
                    print(texto[i],end = "")
                i+=1
            print()
        except EOFError:
            break
main()