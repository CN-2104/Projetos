#include <iostream>
using namespace std;
main(){
    int N,P,Q,res;
    char C;
    cin >> N >> P >> C >> Q;
    if(C == '+')
        res = P+Q;
    if(C == '*')
        res = P*Q;
    if(res>N)
        cout << "OVERFLOW";
    if(res<=N)
        cout << "OK";
}
