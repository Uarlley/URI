#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,k,j,dias=0,i;
    int hmm=0;
    vector<int> ini;
    vector<bool> cases;
    cin>>n;
    cin>>m;
    vector<bool> fita(n,false);
    for(i=0;i<m;i++){
        cin>>a;
        ini.push_back(a-1);
        fita[a-1] = true;
        if(a<n) fita[a] = true;
        if(a-2>=0) fita[a-2] = true;
    }
    dias = 1;
    k = 2;
    while(1){
        for(i=0;i<m;i++){
            if(ini[i]+k<n && fita[ini[i]+k]==false){
                fita[ini[i]+k] = true;
                hmm ++;
            }
            if(ini[i]-k>=0 && fita[ini[i]-k]==false){
                fita[ini[i]-k] = true;
                hmm ++;
            }
        }
        if(hmm==0) {
            cout<<dias<<endl;
            return 0;
        }
        dias++;
        k++;
        hmm=0;
    }

}