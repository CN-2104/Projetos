#include <iostream>
using namespace std;

main(){
    int A,B,C,D;
    cin >> A >> B >> C >> D;
    if((A == B+C+D)&&(D == B+C)&&(B == C)){
        cout << "S";
    }
    else{
        cout << "N";
    }

}
