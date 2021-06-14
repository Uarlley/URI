#include <bits/stdc++.h>
using namespace std;

int main(){
    int o=0,a;
    string t;
    while(cin>>t){
        a = 0;
        for(o=0;o<t.size();o++){
            if(t[o]=='(')a++;
            else if(t[o] == ')') a--;
            if(a<0){
                cout<<"incorrect"<<endl;
                goto line20;
            }
        
        }
        if (a==0) cout<<"correct"<<endl;
        else cout<<"incorrect"<<endl;
        line20:t.clear();
    }
    return 0;

}