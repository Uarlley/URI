def main():
    while True:
        k = 1
        i = 1
        try:
            n = int(input())
            while(i%n!=0):
                i = (i*10 + 1)%n
                k+=1
            print(k)
        except EOFError:
            break

main()