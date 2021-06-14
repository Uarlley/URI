def main():
    testes = int(input())
    ps= 0
    ats = 0
    faltosos = []
    for i in range(0,testes):
        alunos = int(input())
        nomes = input()
        freq = input()
        students = nomes.split()
        freqs = freq.split()
        for k in range(0,alunos):
            for t in range(0,len(freqs[k])):
                if freqs[k][t].find('P')>=0:
                    ps+=1
                if freqs[k][t].find('M')>=0:
                    ats+=1
            if ps<(len(freqs[k])-ats)*0.75:
                faltosos += [students[k]]
            ps = 0
            ats = 0
        if len(faltosos) == 0:
            print()
        for l in range(0,len(faltosos)):
            print(faltosos[l],end = " ") if l+1!=len(faltosos) else print(faltosos[l])
        faltosos = []

main()
        