#include <bits/stdc++.h>

using namespace std;

int main(){
    int horario, tempo, fuso;
    cin >> horario >> tempo >> fuso;
    cout << (horario + tempo + fuso + 24)%24 << endl;
}