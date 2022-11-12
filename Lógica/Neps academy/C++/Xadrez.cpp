#include <iostream>;
using namespace std;
main(){
    int L,C;
    cin >> L >> C;
    if((L%2==0)&&(C%2==1))
        cout << 0;
    if((L%2==1)&&(C%2==0))
        cout << 0;
    if((L%2==0)&&(C%2==0))
        cout << 1;
    if((L%2==1)&&(C%2==1))
        cout << 1;
}
