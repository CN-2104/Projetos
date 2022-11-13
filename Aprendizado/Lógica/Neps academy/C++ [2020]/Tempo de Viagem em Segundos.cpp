#include <iostream>

using namespace std;
int main(){
    int D1,H1,M1,D2,H2,M2,x1,x2;
    cin >> D1 >> H1 >> M1 >> D2 >> H2 >> M2;
    x1 = (60*((D1*24*60)+(H1*60)+(M1)));
    x2 = (60*((D2*24*60)+(H2*60)+(M2)));
    cout << (x2-x1);
}
