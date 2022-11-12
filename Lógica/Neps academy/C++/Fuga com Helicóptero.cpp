#include <iostream>

using namespace std;

int main(){
    int H,P,F,D;
    int fuga = 2;
    cin >> H >> P >> F >> D;
    for(int i = F;;){
        if(D == -1) // horário
            i--;
        if(D == 1)
            i++;
        if(i == -1)
            i = 15;
        if(i == 16)
            i = 0;
        if(i == P){
            cout << "N";
            break;
        }
        if(i == H){
            cout << "S";
            break;
        }
    }

}
