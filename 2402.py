import math
def primo(n):
    if(n==2 or n==1 or n==3 ):
        return False
    if(n%2==0):
        return True
    a = math.ceil(math.sqrt(n))
    for i in range(3,a+1,2):
        if(n%i==0):
            return True
    return False

def main():
    n = int(input())
    a = primo(n)
    if(a==True):
        print("S")
    else:
        print("N")
            
main()
