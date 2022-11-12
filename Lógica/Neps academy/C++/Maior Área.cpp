#include <iostream>
using namespace std;
int main(){
    int x,x1,y,y1;
    cin >> x >> x1 >> y >> y1;
    x = x*x1;
    y = y*y1;
    if(x==y){
        cout << "Empate";
    }
    if(x>y){
        cout << "Primeiro";
    }
    if(x<y){
        cout << "Segundo";
    }
}
