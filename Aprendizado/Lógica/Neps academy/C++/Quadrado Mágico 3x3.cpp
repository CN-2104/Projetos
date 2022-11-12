#include <iostream>
using namespace std;
int M[5][5];
int main(){
    int S=0, F=0, F1=0, F2=0, F3=0, k=0,p=0;
    int N = 3;
    for(int i = 0;i<N;i++)
        for(int j = 0;j<N;j++){
            cin >> M[i][j]; // entrada
        }
        for(int j=0;j<N;j++)
        S=S+M[0][j]; // soma coluna 0
        for(k=N-1;k>=0;k--){
            F3=F3+M[p][k]; // a outra subindo
                p++; //p == linha k = "altura"
        }

     for(int i = 0;i<N;i++){
        for(int j = 0;j<N;j++){
            F= F+M[i][j]; // linha
            F1=F1+M[j][i]; // coluna
            F2=F2+M[j][j]; // diagonal descendo
        }

        if(F!=S || F1!=S || F2!=S || F3!=S){
            cout<< "NAO" <<endl;
            k=1;
            i=N*N;
            break;
        }
    F=F1=F2=0;

    }
      if(k!=1)
    cout<<"SIM"<<endl;

}
