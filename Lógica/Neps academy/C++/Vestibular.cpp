#include <iostream>
using namespace std;
main(){
    int N,cont = 0;
    cin >> N;
    int V[(N+10)];
    for(int i = 0;i<N;i++){
        char A;
        cin >> A;
        V[i] = A;
    }
    for(int I = 0;I<N;I++){
        char B;
        cin >> B;
        if(V[I] == B)
            cont += 1;
    }
    cout << cont;
}
