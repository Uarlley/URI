#include <bits/stdc++.h>
using namespace std;

int main(){
    int temt = 0, temc = 0, t=0,c = 0,n;
    string ida,volta;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ida;
        cin>>volta;
        if(ida=="chuva"){
            if(temc==0) c++;
            else temc--;
            temt++;
        }
        if(volta=="chuva"){
            if(temt==0)t++;
            else temt--;
            temc++;
        }
    }
    cout<<c<<" "<<t<<endl;
}  