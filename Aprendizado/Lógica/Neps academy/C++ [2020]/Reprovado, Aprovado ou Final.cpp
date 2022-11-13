#include <iostream>
using namespace std;
main(){
    int N1,N2,res;
    cin >> N1 >> N2;
    res =((N1*2)+(N2*3))/5;
    if(res>=7)
        cout << "Aprovado";
    else
        if(res<3)
            cout << "Reprovado";
    else
        cout << "Final";
}
