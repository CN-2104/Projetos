#include <iostream>
#include <math.h>
using namespace std;
main(){
    int x;
    cin >> x;
    for(int i = 1;i<=x;i++){
        double y;
        cin >> y;
        cout.precision(4);
        cout.setf(ios::fixed);
        cout << sqrt(y) << endl;
}
}
