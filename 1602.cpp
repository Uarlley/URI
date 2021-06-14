#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int divisores(int n){
    int i=2,div=1;
    if(n%i==0){
        div++;
    }
    for(i=3;i*i<=n;i++){
        if(n%i==0){
            div++;
        }
    }
    div=div*2 - 1;
    return div;
}
int main(void){
    int i,n,hp=0;
    vector<bool> prime{0,0};
    for(i=2;i<=2000000;i++){
        prime.push_back(true);
    }
    for(int j=2;j*j<=2000000;j++){
        if(prime[j]==true){
            for(i=j*j;i<=2000000;i+=j){
                prime[i]=false;
            }
        }
    }
    bool hyper[2000000];
    for(i=2;i<=2000000;i++){
        if (prime[i]==true){
            hyper[i]=true;
        }
        else if((int)sqrt(i)==sqrt(i)){
            if(prime[divisores(i)]==true){
                hyper[i]=true;
            }
            else{
                hyper[i]=false;
            }
        }
        else{
            hyper[i]=false;
        }
    }
    while(cin>>n){
        for(i=2;i<=n;i++){
            hp+=hyper[i];
        }
        printf("%d\n",hp);
        hp=0;
    }
}