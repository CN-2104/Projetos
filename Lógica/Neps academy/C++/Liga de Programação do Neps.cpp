#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin >> x;
    y = x-9;
    if(y<0){
        y = 24+y;
    }
    cout << y;

}
