#include <iostream>
#include <cstring>
#include <stdio.h>
#include <string.h>
using namespace std;
main(){
    int C[10] = { 0 },N;
    cin >> N;
    char in[200];

    for(int i = 0;i<N;i++){
        cin >> in;
        for(int j = 0;j<strlen(in);j++){
            C[in[j] - '0' ]++;
        }
    }
    for(int k = 0;k<10;k++){
        cout << k << " - " << C[k] <<endl;
    }
}
