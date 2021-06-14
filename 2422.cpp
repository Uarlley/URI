#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    vector<int>::iterator h;
    int i,n,k,j,t;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    int aux;
    int aux2;
    cin>>k;
    auto lower = lower_bound(v.begin(),v.end(),k);
    auto index = distance(v.begin(),lower);
    for(i=index-1;i!=0;i--){
        if(binary_search(v.begin(),lower,k - v[i])==true){
            auto aux = lower_bound(v.begin(),lower,k-v[i]);
            auto idx = distance(v.begin(),aux);
            cout<<min(v[i],v[idx])<<" "<<max(v[i],v[idx])<<endl;
            return 0;
        }
    }
    cout<<index;

}