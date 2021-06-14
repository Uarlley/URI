#include <bits/stdc++.h>

using namespace std;

int main(){

    int testes, i,j,k,n, giros = 0;
    cin >> testes;

    for(k = 0; k < testes; k++){
        cin >> n;
        int vagoes[n];
        for(i = 0; i < n; i++) cin >> vagoes[i];
        for(i = n-1; i > 0; i--){
            for(j = 0; j < i; j++ ){
                if(vagoes[j] > vagoes[j+1]){
                    int aux = vagoes[j];
                    vagoes[j] = vagoes[j+1];
                    vagoes[j+1] = aux;
                    giros++;
                }
            }
        }
        cout << "Optimal train swapping takes " << giros << " swaps.\n";
        giros=0;
    }
}