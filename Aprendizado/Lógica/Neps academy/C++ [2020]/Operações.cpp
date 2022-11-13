#include <iostream>
using namespace std;
main(){
    char x;
    cin >> x;
    double A,B;
    cout.precision(2);
    cout.setf(ios::fixed);
    if(x=='M'){
        cin >> A >> B;
        cout << (A*B);
    }
    if(x=='D'){
        cin >> A >> B;
        cout << (A/B);
    }
}
