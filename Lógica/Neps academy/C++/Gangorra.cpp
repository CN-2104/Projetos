#include <iostream>
using namespace std;
main(){
int P1,C1,P2,C2;
cin >> P1 >> C1 >> P2 >> C2;
if (((P1*C1)==(P2*C2))){
    cout << "0";
}else if(((P1*C1)>(P2*C2))){
    cout << "-1";
}else {
    cout << "1";
}
}
