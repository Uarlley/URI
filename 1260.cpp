#include <bits/stdc++.h>
using namespace std;
static float total;
int main(){
    int i,n;
    map<string,float> arvores;
    cout<<setprecision(4)<<fixed;
    cin>>n;
    getchar();
    getchar();
    string name;
    auto it = arvores.begin();
    for(i=0;i<n;i++){
        while(1){
            getline(cin,name);
            if(name.size()==0) break;
            it = arvores.find(name);
            if(it!=arvores.end()) it->second++;
            else arvores.insert(pair<string,float>(name,1));
            total++;
        };

        for(it=arvores.begin();it!=arvores.end();++it){
            cout<<it->first<<" "<<it->second/total*100<<endl;;
        }
        arvores.clear();
        total = 0;
        if(i+1!=n) cout<<endl;
    }
}