#include <iostream>
using namespace std;
int M[5][5];
int main(){
    int n = 3,soma = 0;
    for(int i = 0;i<n;i++)
        for(int j = 0;j<n;j++){
            cin >> M[i][j];
        }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            soma+= M[j][i];
        }
        cout << "Coluna " << i << ": " << soma << endl;
        soma = 0;
    }
}

