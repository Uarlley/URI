#include <bits/stdc++.h>
using namespace std;
typedef struct par{
    int i;
    int j;
}par;

bool verifica(par data,vector<par> pares){
    int i;
    for(i=0;i<pares.size();i++){
        if(pares[i].i==data.i && pares[i].j==data.j) return false;
    }
    return true;
}
int right(int matriz[100][100], int li,int ci,int n,vector<par> pares){
    par data;
    data.i = li;
    data.j = ci+1;
    if (ci+1==n || verifica(data,pares)==false){
        return 0;
    }
    else if(matriz[li][ci+1] >= matriz[li][ci]){
        return 1;
    }
    else return 0;
}
int down(int matriz[100][100], int li,int ci,int n,vector<par> pares){
    par data;
    data.i = li+1;
    data.j = ci;
    if (li+1==n || verifica(data,pares)==false){
        return 0;
    }
    else if(matriz[li+1][ci]>=matriz[li][ci]){
        return 1;
    }
    else return 0;
}
int left(int matriz[100][100], int li,int ci,int n,vector<par> pares){
    par data;
    data.i = li;
    data.j = ci-1;
    if (ci==0 || verifica(data,pares)==false){
        return 0;
    }
    else if(matriz[li][ci-1]>=matriz[li][ci]){
        return 1;
    }
    else return 0;
}
int up(int matriz[100][100], int li,int ci,int n,vector<par> pares){
    par data;
    data.i = li-1;
    data.j = ci;
    if (li==0 || verifica(data,pares)==false){
        return 0;
    }
    else if(matriz[li-1][ci]>=matriz[li][ci]){
        return 1;
    }
    else return 0;
}

vector<par> passa(int matriz[100][100], int n, int l,int c,vector<par> pares){
    par data;
    int total=1;
    if(up(matriz,l,c,n,pares)==1){
        data.i = l-1;
        data.j = c;
        pares.push_back(data);
        pares = passa(matriz,n,l-1,c,pares);
    }
    if(right(matriz,l,c,n,pares)==1){
        data.i = l;
        data.j = c+1;
        pares.push_back(data);
        pares = passa(matriz,n,l,c+1,pares);
    }
    if(down(matriz,l,c,n,pares)==1){
        data.i = l+1;
        data.j = c;
        pares.push_back(data);
        pares =  passa(matriz,n,l+1,c,pares);
    }
    if(left(matriz,l,c,n,pares)==1){
        data.i = l;
        data.j = c-1;
        pares.push_back(data);
        pares = passa(matriz,n,l,c-1,pares);
    }
    return pares;
}
int main(){
    vector<par> pares;
    int matriz[100][100];
    int n,i,j,li,ci;
    cin>>n;
    cin>>li>>ci;
    li = li-1;
    ci = ci-1;
    par data;
    data.i = li;
    data.j = ci;
    pares.push_back(data);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cin>>matriz[i][j];
        }
    }
    pares = passa(matriz,n,li,ci,pares);
    cout<<(pares.size())<<endl;
    return 0;
}