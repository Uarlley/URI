def main():
    i = 0
    while(True):
        try:
            year  = int(input())
            if(i==1):
                print()
            i = 1
            lista = [0,0,0]
            if(year%400==0 or (year%4==0 and year%100!=0)):
                lista[0] = 1
                if(year%55==0):
                    lista[2]=1
            if(year%15==0):
                lista[1] = 1
            if(lista[0]==1):
                print("This is leap year.")
            if(lista[1]==1):
                print("This is huluculu festival year.")
            if(lista[2]==1):
                print("This is bulukulu festival year.")
            if(lista[0]==0 and lista[1]==0 and lista[2]==0):
                print("This is an ordinary year.")
        except EOFError:
            break
main()