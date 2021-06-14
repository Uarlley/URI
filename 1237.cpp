#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(){
    char texto1[52],texto2[52];
    while(fgets(texto1,52,stdin)){
        fgets(texto2,52,stdin);
        texto1[strlen(texto1)-1] = 0;
        texto2[strlen(texto2)-1] = 0;
        int matriz[51][51],total=0;
        for(int i=0;i<=strlen(texto1);i++){
            for(int j=0;j<=strlen(texto2);j++){
                if(j==0 || i==0) matriz[i][j]=0;
                else if(texto1[i-1] == texto2[j-1]){
                    matriz[i][j] = matriz[i-1][j-1] +1;
                    total = max(matriz[i][j],total);
                }
                else matriz[i][j]=0;
            }   
        }
        cout<<total<<endl;
        total = 0;

    }
    return 0;
}