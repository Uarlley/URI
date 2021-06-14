#include <bits/stdc++.h>
using namespace std;
int main(){
    int casos,i,j,n,k,percent=0;
    float media,total=0;
    int notas[1000];
    cin>>casos;
    for(k=0;k<casos;k++){
        cin>>n;
        for(j=0;j<n;j++){
            cin>>notas[j];
            total+=notas[j];
        }
        media=total/n;
        for(i=0;i<n;i++) if(notas[i]>media) percent++;
        printf("%.3f%%\n",(float)percent/n*100);
        percent=0;
        total=0;
    }
}