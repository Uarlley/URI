#include <bits/stdc++.h>

using namespace std;

int main(){
    int horaInicial, minInicial, horaFinal, minFinal, tempoInicial, tempoFinal,tempoTotal;
    cin >> horaInicial >> minInicial >> horaFinal >> minFinal;
    tempoInicial = horaInicial*60 + minInicial;
    tempoFinal = horaFinal*60 + minFinal;
    tempoTotal = tempoFinal-tempoInicial;
    if(tempoTotal < 1) tempoTotal+=1440;
    

    cout << "O JOGO DUROU " << tempoTotal/60 << " HORA(S) E " << tempoTotal%60 << " MINUTO(S)\n";

}