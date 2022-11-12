#include <iostream>
using namespace std;
main (){
    int n,i = 1,c = 0,s = 0,a;
    cin >> n;
    while (i <= n){
        cin >> a;
        i++;
        if(s <1000000){
            s += a;
            c++;
        }
    }
    cout << c;
}
