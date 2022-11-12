#include <iostream>
using namespace std;
int main(){
    int Ha,Ma,Hr,Mr,res = 0;
    cin >> Ha >> Ma>> Hr >> Mr;
    Ma += Ha*60;
    Mr += Hr*60;
    res = Mr-Ma;
    if(res >=45){
        cout << "Sucesso";
    }else{
        cout << "Atrasado " << 45-res;
    }
}
