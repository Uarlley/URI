b = input()
a = b.split()
horaInicial = int(a[0])
minInicial = int(a[1])
horaFinal = int(a[2])
minFinal = int(a[3])

tempoInicial = horaInicial*60 + minInicial
tempoFinal = horaFinal*60 + minFinal
tempoTotal = tempoFinal-tempoInicial
if(tempoTotal < 1):
    tempoTotal+=1440


print("O JOGO DUROU", tempoTotal//60, "HORA(S) E", tempoTotal%60, "MINUTO(S)\n",end ="")
