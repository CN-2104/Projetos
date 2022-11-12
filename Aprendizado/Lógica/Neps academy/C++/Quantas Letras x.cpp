#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s,c;
    int cont = 0;
    cin >> s >> c;
    for(int i = 0;i<s.size();i++){
        string x;
        x = s[i];
        if(x==c){
            cont++;
        }
    }
    cout << cont;
}
