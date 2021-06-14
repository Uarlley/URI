#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int carros,voltas,i,j,tempo,soma=0;
    cin>>carros>>voltas;
    vector<int> sum(carros);
    vector<int> vic(carros);
    for(i=0;i<carros;i++){
        for(j=0;j<voltas;j++){
            cin>>tempo;
            soma+=tempo;
        }
        sum[i]=soma;
        soma=0;
    }
    vic = sum;
    sort(vic.begin(),vic.end());
    for(j=0;j<3;j++){
        for(i=0;i<carros;i++){
            if(vic[j] == sum[i]){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}