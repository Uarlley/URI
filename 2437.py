def main():
    tex = input()
    lista = tex.split()
    xi = int(lista[0])
    yi = int(lista[1])
    xf = int(lista[2])
    yf = int(lista[3])
    step = 0
    while(xi!=xf and yi!=yf):
        if(xi>xf):
            xi-=1
        if(xi<xf):
            xi+=1
        if(yi>yf):
            yi-=1
        if(yi<yf):
            yi+=1
        step+=2
    while(xi!=xf):
        if(xi>xf):
            xi-=1
        if(xi<xf):
            xi+=1
        step+=1
    while(yi!=yf):
        if(yi>yf):
            yi-=1
        if(yi<yf):
            yi+=1
        step+=1
    print(step)
main()
