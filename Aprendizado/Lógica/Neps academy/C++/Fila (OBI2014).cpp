#include <iostream>
#include <set>
using namespace std;
int main(){
    int N,V[50005],S,L;
    cin >> N;
    for(int i = 0;i<N;i++){
        cin >> V[i];
    }
    cin >> S;
    for(int i = 0;i<S;i++){
        cin >> L;

    }
    for(int i = 0;i<N;i++){
        if(V[i] != 0){
            cout << V[i] << " ";
        }
    }

}

