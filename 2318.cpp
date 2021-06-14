#include <bits/stdc++.h>
using namespace std;

typedef struct par{
    int i,j;
}par;

int main(){
    int i,j,soma=0,sum=0;
    int M[3][3];
    par cords;
    vector<par> zeros;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>M[i][j];
        }
    }
    if(M[0][0]==0 && M[1][1]==0 && M[2][2]==0){
        M[2][2] = (M[1][0] + M[1][2] + M[0][1] + M[0][2] - M[2][0] +-M[2][1])/2;
    }
    if(M[2][0]==0 && M[1][1]==0 && M[0][2]==0){
        M[2][0] = (M[1][0] + M[1][2] + M[0][0] + M[0][1] - M[2][1] +-M[2][2])/2;
    }
    for(j=0;j<3;j++){
        for(i=0;i<3;i++){
            if(i==2){
                if(M[i][j]!=0){
                    soma+=M[i][j];
                    goto achei;
                }
                else break;
            }
            if(M[i][j]==0) break;
            soma+=M[i][j];
        }
        soma=0;
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(j==2){
                if(M[i][j]!=0){
                    soma+=M[i][j];
                    goto achei;
                }
                else break;
            }
            if(M[i][j]==0) break;
            soma+=M[i][j];
        }
        soma=0;
    }
    if(M[0][0]!=0 && M[1][1]!=0 && M[2][2]!=0){
        soma = M[0][0] + M[1][1] +M[2][2];
    }
    else if(M[0][2]!=0 && M[1][1]!=0 && M[2][0]!=0){
        soma = M[2][0] + M[1][1] + M[0][2];
    }
    achei:
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(M[i][j]==0){
                cords.i=i;
                cords.j=j;
                zeros.push_back(cords);
            }
            sum+=M[i][j];
        }
        if(sum!=soma && zeros.size()==1){
            M[zeros[0].i][zeros[0].j] = soma-sum;
        }
        sum=0;
        zeros.clear();
    }
    for(j=0;j<3;j++){
        for(i=0;i<3;i++){
            if(M[i][j]==0){
                cords.i=i;
                cords.j=j;
                zeros.push_back(cords);
            }
            sum+=M[i][j];
        }
        if(sum!=soma && zeros.size()==1){
            M[zeros[0].i][zeros[0].j] = soma-sum;
        }
        sum=0;
        zeros.clear();
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(j<2)cout<<M[i][j]<<" ";
            else cout<<M[i][j];
        }
        cout<<endl;
    }
    return 0;
}