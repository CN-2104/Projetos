#include <iostream>
#include <algorithm>
using namespace std;
int V[1005];
int main(){
    int N,contm = 0;
    cin >> N;
    for (int i = 0;i<N;i++)
        cin >> V[i];
    for(int i = 1;i<N-1;i++){
        if((V[i]<V[i-1])&&(V[i]<V[i+1])){
            cout << "S";
            contm++;
            break;
        }
    }
    if(contm==0)
        cout << "N";
}
