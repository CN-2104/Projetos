#include <iostream>
using namespace std;
main(){
    double pi = 3.1416,r,res;
    cin >> r;
    cout.precision(2);
    cout.setf(ios::fixed);
    res = r*r*pi;
    cout << res;
}
