#include <iostream>
#include <math.h>
using namespace std;

int main(void){
	int m,n,d=0,t;
	cin>>t;
	while(t--){
		cin>>m;
		cin>>n;
		d = n*log10(m)+1;
		cout<<d<<"\n";
	}
}