#include <iostream>

using namespace std;
int main(){
    int f1,f2,f3,m;
    cin >> m >> f1 >> f2;
    f3 = m-(f1+f2);
    cout << max(f3,max(f1,f2));


}
