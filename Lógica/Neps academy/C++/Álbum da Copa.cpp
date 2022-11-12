#include <iostream>
using namespace std;
int V[105];
int main(){
    int N,M,cont = 0;
    cin >> N >> M;
    for(int i = 1;i<=M;i++){
        int x;
        cin >> x;
        V[x] = 1;
    }

    for(int i = 1;i<=N;i++){
        if(V[i]==0){
            cont++;
        }
    }
    cout << cont;
}
