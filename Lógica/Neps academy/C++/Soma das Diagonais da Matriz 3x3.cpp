#include <iostream>
using namespace std;
int M[5][5];
int main(){
    int k = 2,soma1=0,soma2=0;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
        cin >> M[i][j];
        }
    }
    for(int i = 0;i<3;i++){
        soma1 += M[i][i];
        soma2 += M[i][k];
        k--;
    }
    cout << "Diagonal principal: " << soma1 << endl << "Diagonal secundaria: " << soma2;
}
