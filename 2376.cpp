#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,j,p1,p2,k=0;
    vector<char> players = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P'};
    i = 16;
    while(i--){
        if(i==0) break;
        cin>>p1>>p2;
        if(p1<p2){
            players.erase(players.begin()+k);
        }
        else players.erase(players.begin()+k+1);
        k++;
        if(i==8 || i==4 || i == 2 || i==1) {
            k = 0;
        }
    }
    cout<<players[0]<<endl;
    return 0;
}