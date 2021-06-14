def main():
    tex = input()
    lista = tex.split()
    l1 = int(lista[0])
    l2 = int(lista[1])
    l3 = int(lista[2])
    if(l1>l2 and l1>l3):
        A = l1
        B = max(l2,l3)
        C = min(l2,l3)
    elif(l2>l1 and l2>l3):
        A = l2
        B = max(l1,l3)
        C = min(l1,l3)
    else:
        A = l3
        B = max(l1,l2)
        C = min(l1,l2)
    if(abs(A-B)<C and C<(A+B) and abs(C-A)<B and (C+A)>B and abs(C-B)<A and (C+B)>A):
        if(A**2==B**2 + C**2):
            print("r")
        elif(A**2 > B**2 + C**2):
            print("o")
        else:
            print("a")
    else:
        print("n")
        
main()