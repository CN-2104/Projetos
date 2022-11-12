#include <iostream>
using namespace std;
main(){
    int N,cont = 0;
    cin >> N;
    int V[(N+10)];//declarar

    for(int i = 0;i<N;i++){ //entrada
        cin >> V[i];
        if(V[i]==-1) //transformar -1 para 10
            V[i]=10;
    }

    //da esquerda para direita
    for(int i = 1;i<N;i++){
        V[i]= min(9,min(V[i-1]+1,V[i]));
    }
    //da direita para a esquerda
    for(int i = (N-2);i>=0;i--){
        V[i]= min(9,min(V[i+1]+1,V[i]));
        }

   //output dados
    for(int i = 0;i<N;i++){
        cout << V[i] << " ";
    }
}

