#include <iostream>
using namespace std;

int main(void){
    int x,y,i,j;
    cin>>x>>y;
    for(i=1;i<=y;i++){
        if(i%x==0){
            cout<<i<<endl;
        }
        else{
            if (i==y){
                cout<<i;
            }
            else{
                cout<<i<<" ";
            }
        }
    }
}