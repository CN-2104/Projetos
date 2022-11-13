#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int x,y,c,d,a1,a2;
    cin >> x >> y >> c >> d;
    a1 = x*y;
    a2 = c*d;
    cout << max(a1,a2);
}
