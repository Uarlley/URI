#include <iostream>
#include <vector>
using namespace std;
int main(){
	int casas,cartas,i,j,k,t = 0;
	vector<int> houses,letters;
	cin>>casas>>cartas;
	for(i=0;i<casas;i++){
		cin>>k;
		houses.push_back(k);
	}
	for(i=0;i<cartas;i++){
		cin>>k;
		letters.push_back(k);
	}
	int idx = 0;
	for(i=0;i<cartas;i++){
		auto lower = lower_bound(houses.begin(),houses.end(),letters[i]);
		t+=abs(idx - distance(houses.begin(),lower));
		idx = distance(houses.begin(),lower);
	}
	cout<<t<<endl;
}	
