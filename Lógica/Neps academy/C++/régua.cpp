#include <iostream>

using namespace std;
main (){
    int k,x,y,R;
    cin >> k >> x >> y;
    if(x>y)
        R = x-y;
    else
        R = y-x;
    if(R >= k)
        cout << "EH SUFICIENTE";
    else
        cout << "NAO EH SUFICIENTE";
}

