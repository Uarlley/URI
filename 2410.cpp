#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n,qnt=0;
    vector<int> pres(10e6,0);
    cin>>n;
    for(i=0;i<n;i++){
        cin>>j;
        if(pres[j]==0){
            qnt++;
            pres[j]=1;
        }

    }
    cout<<qnt<<endl;
}