#include <bits/stdc++.h>
using namespace std;

int resto(string n){
    int size = n.size();
    int num = 0,i;
    for(i=0;i<size;i++){
        num = num*10 + ((int)n[i]-48);
        num = num%1500;
    }
    return num%1500;
}

int main(){
    vector<int> lst(1502);
    lst[0] = 0;
    lst[1] = 1;
    for(int i = 2;i<1501;i++){
        lst[i] = ((lst[i-1] + lst[i-2])%1000);
    }
    int inst,num;
    string k;
    cin>>inst;
    for(int i =0;i<inst;i++){
        cin>>k;
        num = resto(k);
        num = lst[num];
        if(num<100){
            if(num<10) cout<<"00";
            else cout<<"0";
        }
        cout<<num<<endl;
    }

}