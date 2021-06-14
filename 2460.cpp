#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n,m,i;
    cin>>n;
    vector<int> fila(n);
    for(i=0;i<n;i++){
        cin>>fila[i];
    }
    int count=1;
    cin>>m;
    vector<int> sairam(m);
    for(i=0;i<m;i++){
        cin>>sairam[i];
    }
    for(i=0;i<n;i++){
        if(find(sairam.begin(),sairam.end(),fila[i])==sairam.end()){
            count++;
            if(count==(n-m)+1){
                cout<<fila[i];
            }
            else cout<<fila[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}