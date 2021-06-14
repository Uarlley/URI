#include <bits/stdc++.h>
using namespace std;
struct pri{
    int tempo;
    int id;
    pri(int tempo,int id)
        : tempo(tempo), id(id)
    {
    }
};
struct comp{
    bool operator()(pri const& t1,pri const& t2){
        if( t1.tempo>t2.tempo) return true;
        else if(t1.tempo<t2.tempo) return false;
        else return t1.id>t2.id;
    }
};
int main(){
    priority_queue<pri,vector<pri>,comp> pq; 
    vector<int> caixas;
    int N,M,i,k,maxi = 0;
    cin>>N>>M;
    for(i=0;i<N;i++){
        cin>>k;
        caixas.push_back(k);
        pq.push(pri(0,i));
    }
    while(M--){
        cin>>k;
        int id = pq.top().id;
        int tempo = pq.top().tempo;
        pq.pop();
        pq.push(pri(tempo + k*caixas[id],id));
        maxi = max(maxi,tempo + k*caixas[id]);
    }
    cout<<maxi<<endl;
}