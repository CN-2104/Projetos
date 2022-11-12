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
    int n,i = 0;
    do{
        cin>>n;
        i++;
        cout << "Teste " << i << endl << hanoi(n) << endl << endl;
    }while(n!=0);
}
