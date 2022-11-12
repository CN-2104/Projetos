#include <iostream>
using namespace std;
int main(){
    int x = 0,cont = 0;
    do{
        cin >> x;
        cont++;
    }while(x!=2018);
    if(x!=0){
        cout << cont-1;
    }else{
    cout << cont;
    }
}
