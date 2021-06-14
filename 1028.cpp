#include <bits/stdc++.h>

using namespace std;

int main(){
    int f1,f2,n,i,k;
    int d1,d2;
    cin>>n;
    while(n--){
        cin>>f1>>f2;
        d1 = max(f1,f2);
        d2 = min(f1,f2);
        while(d1%d2!=0){
            int aux = d2;
            d2 = d1%d2;
            d1 = aux;;

        }
        cout<<d2<<endl;
    }
    return 0;
}