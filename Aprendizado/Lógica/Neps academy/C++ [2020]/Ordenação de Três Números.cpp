#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int V[5];
    cin >> V[0] >> V[1] >> V[2];
    sort(V,V+3);
    cout << V[0] << endl << V[1] << endl << V[2] << endl;
}
