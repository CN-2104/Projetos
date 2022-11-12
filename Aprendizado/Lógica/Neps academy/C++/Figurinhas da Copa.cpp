#include <iostream>
using namespace std;
int Fc[105],F[105];
int main(){
    int N,C,M,cont =0;
    cin >> N >> C >> M;
    for(int i = 1;i<=C;i++){
        int x;
        cin >> x;
        Fc[x]=1;
    }
    for(int i = 1;i<=M;i++){
        int x;
        cin >> x;
        F[x]=1;
    }
    for(int i = 1;i<=N;i++){
        if((Fc[i]==1)&&(F[i]==0)){
            cont++;
        }
    }
    cout << cont;
}
