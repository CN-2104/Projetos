#include <iostream>
using namespace std;
main(){
    int N,fatorial = 1;
    cin >> N;
    for(int i = 1;i<=N;i++)
        fatorial *= i;
    cout << fatorial;
}
