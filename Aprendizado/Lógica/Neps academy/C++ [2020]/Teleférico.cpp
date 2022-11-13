#include <iostream>

using namespace std;
int main(){
    int c,a,cont = 0;
    cin >> c >> a;
    c = c-1;
    while(a>0){
        a = a-c;
        cont++;
    }
    cout << cont;
}
