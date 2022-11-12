#include <iostream>
using namespace std;

int main(){
    int j, i, N, M[12][12], S=0, F=0, F1=0, F2=0, F3=0, k=0;
    cin>>N;
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
           cin>>M[i][j]; // entrada


    for(j=0;j<N;j++)
        S=S+M[0][j]; // soma coluna 0

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
           F=M[i][j]+F; // linha i coluna j (mover >>>>)
           F1=F1+M[j][i]; // coluna i linha j (mover horizontal)
           F2=F2+M[j][j]; // colona j e linha j (mover diagonalmente)
        }
        int p=0;
        for(k=N-1;k>=0;k--){
           F3=F3+M[p][k]; // a outra diagonal
           p++;
        }

        if(F!=S || F1!=S || F2!=S || F3!=S){
            cout<<-1<<endl;
            k=1;
            i=N*N;
        }

    F=F1=F2=F3=0;
    }

    if(k!=1)
    cout<<S<<endl;



    return 0;
}
