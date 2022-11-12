#include <iostream>

using namespace std;
int main(){
    int n,m2 = 0,m3 = 0,m4 = 0;
    cin >> n;
    for(int i = 0;i<n;i++){
        int x;
        cin >> x;
        if(x % 2 == 0)
            m2++;
        if(x % 3 == 0)
            m3++;
        if(x % 4 == 0)
            m4++;
    }
    cout << m2 << endl << m3 << endl << m4 << endl;
}
