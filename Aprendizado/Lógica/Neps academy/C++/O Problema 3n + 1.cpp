#include <iostream>
using namespace std;
int cont = 0;
int Collatz(int N){
    if(N==1){
        return cont;
    }
    while(N!=1){
        cont++;
        if(N%2==0){
            return Collatz(N/2);
        }
        else{
            return Collatz((3*N)+1);
        }
    }
}
int main(){
    int N;
    cin >> N;
    cout << Collatz(N);
}
