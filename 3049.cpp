#include <bits/stdc++.h>
using namespace std;

int main(){
    double t,b;
    int total  = 5600,m;
    cin>>b>>t;
    if(t+b==160) m = total;
    else if(t==0 || t==160) m = (b*70)/2;
    else if(b==0 or b==160) m = (t*70)/2;
    else m = (t+b)*70/2;
    if(m>total) cout<<1<<endl;
    else if(m==total) cout<<0<<endl;
    else cout<<2<<endl;
    return 0;
}