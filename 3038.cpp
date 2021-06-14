#include <bits/stdc++.h>
using namespace std;

int main(){
    char texto[256];
    int i,size;
    while(cin.getline(texto,256)) {
        size = sizeof(texto);
        for(i=0;i<size;i++){
            if(texto[i]=='@') texto[i] = 'a';
            else if(texto[i]=='&') texto[i] = 'e';
            else if(texto[i]=='!') texto[i] = 'i';
            else if(texto[i]=='*') texto[i] = 'o';
            else if(texto[i]=='#') texto[i] = 'u';
        }
        cout << texto << endl;
    }
}