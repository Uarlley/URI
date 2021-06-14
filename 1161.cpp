#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

int main(){
    unsigned long long int total1=1,total2=1;
    int n1,n2,i;
    while(cin>>n1){
        cin>>n2;
        for(i=1;i<=max(n1,n2);i++){
            if(i<n1+1) total1*=i;
            if(i<n2+1) total2*=i;
        }
        cout<<total1 + total2<<endl;
        total1=1;
        total2=1;
    }
    return 0;
}