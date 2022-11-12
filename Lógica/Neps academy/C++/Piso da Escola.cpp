#include <iostream>
using namespace std;
int main(){
    int L,C;
    cin >> L >> C;
    cout << L*C+ (L-1)*(C-1) << endl;
    cout << 2*(L-1) + 2*(C-1) << endl;
}
