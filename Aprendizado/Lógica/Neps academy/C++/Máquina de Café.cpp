#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int A[5],soma[5];
    for(int i=1;i<=3;i++)
        cin >> A[i];
    soma[1] = 4*A[3]+2*A[2];
    soma[2] = 2*A[3]+2*A[1];
    soma[3] = 4*A[1]+2*A[2];
    cout << min(soma[1],min(soma[2],soma[3]));
}
