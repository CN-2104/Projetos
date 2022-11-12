#include <iostream>
using namespace std;

int main(){
    int c,n,cont = 0;
    cin >> n >> c;
    for(int i = 0;i<n;i++){
        cont += c;
        if(c!=1)
            c--;
    }
    cout << cont;
}

