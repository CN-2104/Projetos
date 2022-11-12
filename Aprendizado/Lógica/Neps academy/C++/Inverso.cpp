#include <iostream>
using namespace std;
main(){
    int V[12];
    for(int i = 1;i<=10;i++){
        cin >> V[i];
    }
    for(int i = 0;i<10;i++){
        cout << V[10-i] << endl;
    }
}
