import math as m
def main():
    msg = []
    alfabeto = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
    testes = int(input())
    for i in range(0,testes):
        msg += input()
        for i in range(0,len(msg)):
            if(msg[i] in alfabeto):
                msg[i] = chr(ord(msg[i]) + 3)
        msg = msg[::-1]
        for i in range(m.floor(len(msg)/2),len(msg)):
            msg[i] = chr(ord(msg[i])-1)
        print(''.join(msg))
        msg = []
main()