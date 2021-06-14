#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    int i,t;
    long long int n;
    cin>>t;
    while(t--){
        cin>>n;
        if (n==1)
            printf("Not Prime\n");
        else if (n==2)
            printf("Prime\n");
        else if(n%2==0)
            printf("Not Prime\n");
        else{
            for(i=3;i*i<n;i+=2){
                if(n%i==0){
                    printf("Not Prime\n");
                    break;
                }
                else if((i+2)*(i+2)>n)
                    printf("Prime\n");
            }
        }
    }

}