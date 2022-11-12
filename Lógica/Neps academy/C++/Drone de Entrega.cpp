#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int A,B,C,H,L;
    cin >> A >> B >> C >> H >> L;

    if((((A <= H)&&(B <= L)) || (((B <= H)&&(A <= L))))||
       (((A <= H)&&(C <= L)) || (((C <= H)&&(A <= L))))||
       (((C <= H)&&(B <= L)) || (((B <= H)&&(C <= L))))
       ){
        cout << "S";
    }
    else
        cout << "N";
}
