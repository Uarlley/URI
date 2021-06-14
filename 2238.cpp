#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B,C,D,i,j,k;
    cin>>A>>B>>C>>D;
    if(C%A!=0){
        cout<<-1<<endl;
        return 0;
    }
    vector<int> a;
    for(i=1;i<=sqrt(C);i++){
        if(C%i==0){
            k = C/i;
            if(i%A==0 && i%B!=0 && D%i!=0){
                a.push_back(i);
            }
            if(k%A==0 && k%B!=0 && D%k!=0){
                a.push_back(k);
            }
        }
    }
    if(a.size()==0)
    cout<<-1<<endl;
    else{
        sort(a.begin(),a.end());
        cout<<a[0]<<endl;
    }
    return 0;
}