#include <bits/stdc++.h>
using namespace std;

vector<int> separa(int num){
    int i=0;
    vector<int> v(10,0);
    while(1){
        if(num<10){
            v[i]=num;
            return v;
        cout<<endl;
        }
        v[i] = num%10;
        num = num/10;
        i++;
    }
}
int main(){
    bool carry = false;
    int num1,num2,total=0;
    vector<int> v1,v2;
    while(1){
        cin>>num1;
        cin>>num2;
        if(num1==0 && num2==0) break;
        v1 = separa(num1);
        v2 = separa(num2);
        for(int i=0;i<max(v1.size(),v2.size());i++){
            if(carry == true){
                if((v1[i] + v2[i]+1)>=10){
                carry = true;
                total+=1;

                }
                else carry = false;
            }
            else if((v1[i] + v2[i])>=10){
                carry = true;
                total+=1;
            }

        }
        if(total==0) cout<<"No carry operation."<<endl;
        else if(total==1) cout<<"1 carry operation."<<endl;
        else cout<<total<<" carry operations."<<endl;
        total = 0;
        carry  = false;
        v1.clear();
        v2.clear();
    }
    return 0;
}