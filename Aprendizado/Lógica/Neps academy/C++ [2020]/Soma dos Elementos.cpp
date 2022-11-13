#include <iostream>
using namespace std;
main(){
    int N,soma = 0;
    cin >> N;
    for(int i = 0;i<N;i++){
        int x;
        cin >> x;
        soma += x;
    }
    cout << soma;
}
