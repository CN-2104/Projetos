#include <iostream>
using namespace std;
main(){
    int A,B,C;
    cin >> A >> B >> C;
    if(A==B)
        cout << C;
    if(A==C)
        cout << B;
    if(B==C)
        cout << A;

}
