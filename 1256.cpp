#include <bits/stdc++.h>
using namespace std;

int main(){
    int size,qnt,c,i,j,num;
    cin>>c;
    for(int k=0;k<c;k++){
        cin>>size>>qnt;
        vector<vector<int>> hash(size);
        for(j=0;j<qnt;j++){
            cin>>num;
            hash[num%size].push_back(num);
        }
        for(i=0;i<size;i++){
            qnt = hash[i].size();
            cout<<i<<" -> ";
            for(j=0;j<qnt;j++){
                if(j==0) cout<<hash[i][j];
                else cout<<" -> "<<hash[i][j];
                if(j+1==qnt) cout<<" -> ";
            }
            cout<<"\\"<<endl;
        }
        if(k+1!=c) cout<<endl;
    }
}