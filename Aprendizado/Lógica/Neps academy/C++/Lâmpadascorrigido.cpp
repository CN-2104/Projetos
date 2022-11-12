#include <iostream>
using namespace std;
main(){
    int n;
    bool la = 0,lb = 0;
    cin >> n;
    for(int i = 1;i <= n;i++){
        int b;
        cin >> b;
        if(b == 1){
            la = !la;
        }else if(b == 2){
                la = !la;
                lb = !lb;
        }
    }
    cout << la << endl << lb;
}
