#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,l1,l2,l3;
    cin>>l1>>l2>>l3;
    if(l1>l2 && l1>l3){
        a = l1;
        b = max(l2,l3);
        c = min(l2,l3);
    }
    else if(l2>l3 && l2>l1){
        a = l2;
        b = max(l1,l3);
        c = min(l1,l3);
    }
    else{
        a = l3;
        b = max(l2,l1);
        c = min(l2,l1);
    }
    if(abs(a-b)<c && c<(a+b) && abs(c-a)<b && (c+a)>b && abs(c-b)<a && (c+b)>a){
        if(a*a==b*b + c*c) cout<<"r"<<endl;
        else if(a*a > b*b + c*c) cout<<"o"<<endl;
        else cout<<"a"<<endl;
    }
    else cout<<"n"<<endl;
}