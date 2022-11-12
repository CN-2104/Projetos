#include <iostream>
using namespace std;
int main(){
    int A,B,C;
    cin >> A >> B >> C;
    if((A==B+C)||(B==A+C)||(C==A+B)||(A==C)||(A==B)||(B==C)){
        cout << "S";
    }else
        cout << "N";
}
