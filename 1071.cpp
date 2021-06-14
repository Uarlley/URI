#include <iostream>
using namespace std;

int main(){
	int x,y,r=0,i;
	cin>>x;
	cin>>y;
	if(x>y){
		for(i=y+1;i<x;i++){
			if(i%2==0){
			}
			else{
				r+=i;
			}
		}
		cout<<r<<"\n";
	}
	else if(y>x){
		for(i=x+1;i<y;i++){
			if(i%2==0){
			}
			else{
				r+=i;
			}
		}
		cout<<r<<"\n";
	}
	else{
		cout<<"0\n";
	}
	return 0;
}