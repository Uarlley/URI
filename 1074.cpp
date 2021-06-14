#include <iostream>
using namespace std;

int main(){
	int i;
	long int n;
	cin>>i;
	while(i--){
		cin>>n;
		if(n<0){
			if(n%2==0)
				cout<<"EVEN NEGATIVE\n";
			else
				cout<<"ODD NEGATIVE\n";
		}
		else if(n>0){
			if(n%2==0)
				cout<<"EVEN POSITIVE\n";
			else
				cout<<"ODD POSITIVE\n";
		}
		else
			cout<<"NULL\n";
	}
	return 0;
}	