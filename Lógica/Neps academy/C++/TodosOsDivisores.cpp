#include <iostream>
using namespace std;
main(){
    int x;
    cin >> x;
    for(int i=1;i<=x;i++){
        if((x%i)== 0){
            cout << i << " ";
        }
    }
}
