#include <iostream>
using namespace std;
main(){
    int n,l,c,contador = 0,i = 1;
    cin >> n;
        while(i <= n){
        i++;
        cin >> l >> c;
            if(l>c){
            contador += c;
            }
        }

    cout << contador;
}
