#include <iostream>
#include <math.h>
using namespace std;
main(){
    double x,y;
    cout.precision(4);
    cout.setf(ios::fixed);
    cin >> x >> y;
    cout << pow(x,y);
}
