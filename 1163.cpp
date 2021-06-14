#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<fixed<<setprecision(5);
    long double a,v,g,pi,h,p1,p2,x;
    g = 9.80665;
    pi = 3.14159;
    while(cin>>h>>p1>>p2){
        cin>>n;
        while(n--){
            cin>>a>>v;
            a = a*pi/180;
            x = (v*cos(a)/g)*(v*sin(a) + sqrt(pow(v,2)*pow(sin(a),2)+2*g*h));
            if(x>p1 && x<p2) cout<<x<<" -> DUCK"<<endl;
            else cout<<x<<" -> NUCK"<<endl;
        }
    }
    return 0;
}