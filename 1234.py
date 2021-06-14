def big(char):
    if(ord(char)<97):
        return char
    else:
        return chr(ord(char)-32)

def little(char):
    if(ord(char)>=97):
        return char
    else:
        return chr(ord(char)+32)

def is_lit(char):
    return 1 if(ord(char)>=97) else 0

def is_big(char):
    return 1 if(ord(char)<97) else 0

def main():
    while(True):
        try:
            text = list(input())
            size = len(text)
            last = ' '
            for i in range(0,size):
                if(text[i]!=' '):
                    if(last==' '):
                        text[i] = big(text[i])
                    elif(is_big(last)==1):
                        text[i] = little(text[i])
                    else:
                        text[i] = big(text[i])
                    last = text[i]
            for j in range(0,size):
                print(text[j],end="")
            print()
        except EOFError:
            break
main()