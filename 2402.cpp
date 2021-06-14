#include <bits/stdc++.h>
using namespace std;

bool primo(long long int n){
    long long int i;
    if(n==1 || n==2 || n==3) return false;
    if(n%2==0) return true;
    for(i=3;i*i+1<=n;i+=2){
        if(n%i==0) return true;
    }
    return false;
}

int main(){
    long long int a;
    cin>>a;
    bool p = primo(a);
    if(p==true) cout<<"S"<<endl;
    else cout<<"N"<<endl;
    return 0;
}
