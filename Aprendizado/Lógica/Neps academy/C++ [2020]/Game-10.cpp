#include <iostream>

using namespace std;
int main(){
    int N,A,D,i,c = 0;
    cin >> N >> D >> A;
    for(i = A;i!=D;i++){
        c++;
        if(i == N){
            i = 1;
            c++;
        }
    }
    if(D == A){
        cout << 0;
    }else{
    cout << c;
    }

}
