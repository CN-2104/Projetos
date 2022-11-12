#include <iostream>
using namespace std;
int V[1000005];
int main(){
    int C,x,cont = 0;
    cin >> C;
    for(int i = 0;i<C;i++){
        cin >> x;
        if(V[x]==0){
            V[x] = 1;
            cont+= 2;
        }else
        V[x]--;
    }
    cout << cont;
}
