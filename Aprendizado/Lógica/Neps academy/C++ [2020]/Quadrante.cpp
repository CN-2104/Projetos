#include <iostream>
using namespace std;
main(){
    int x,y;
    cin >> x >> y;
    if((x>0)&&(y>0))
        cout << "Q1";
    if((x>0)&&(y<0))
        cout << "Q4";
    if((x<0)&&(y>0))
        cout << "Q2";
    if((x<0)&&(y<0))
        cout << "Q3";
    if((x==0)||(y==0))
        cout << "eixos";
}
