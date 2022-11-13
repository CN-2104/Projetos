#include <iostream>
using namespace std;
int hanoi(int n){
    if(n == 1){
        return 1;
    }else{
        return hanoi(n - 1) * 2 + 1;
    }
}
int main(){
    int n;
    for(int i = 1;i<=30;i++){
        cin>>n;
        if(n==0)
            break;
        cout << "Teste " << i << endl << hanoi(n) << endl << endl;
    }
}
