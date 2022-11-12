#include <iostream>
using namespace std;
main(){
    int n,maior = 1,atual = 1,num,anterior;
    cin >> n;

    for(int i =0;i<n;i++){
        cin >> num;

        if (i > 0){
            if(anterior == num)
                atual++;
            if((anterior != num)||(i == (n-1))){
                if(atual > maior)
                    maior = atual;

                atual = 1;
            }
        }
        anterior = num;
    }
    cout << maior;
}
