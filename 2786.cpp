#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int l,c,tipo1=0,tipo2=0,i;
	cin>>l>>c;
	tipo1=c*l + (c-1)*(l-1);
	tipo2=(c-1)*2 + (l-1)*2;
	cout<<tipo1<<endl;
	cout<<tipo2<<endl;
	return 0;
}