#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
	long long int n;
	while(cin>>n){
		bool ver=false;
		vector<long long int> d;
		vector<long long int> e;
		int i,m,j=0,k=0,pares=0,v,c=0;
		char l;
		for(i=0;i<n;i++){
			ver=false;
			cin>>m;
			cin>>l;
			if(l=='D'){
				d.push_back(m);
			}
			else{
				e.push_back(m);
			}
		}
		for(i=0;i<e.size();i++){
			for(v=0;v<d.size();v++){
				if(e[i]==d[v]){
					e.erase(e.begin()+i);
					d.erase(d.begin()+v);
					pares++;
					i--;
					break;
				}
			}
		}
		cout<<pares<<endl;
	}
	return 0;
}		