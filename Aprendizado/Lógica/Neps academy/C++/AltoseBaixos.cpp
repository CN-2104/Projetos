#include <iostream>

using namespace std;
main(){
    int N,X = 0;
    char A;
    cin >> N;
    for(int i = 1;i < N;i++){
        cin >> A;
        if(i == 1)
            cout << X << " ";
        if(A == 'A'){
            X += 1;
        }else
        if(A == 'B'){
            X -= 1;
        }
        cout << X << " ";
    }

}
