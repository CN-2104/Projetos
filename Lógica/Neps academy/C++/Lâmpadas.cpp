#include <iostream>
using namespace std;
main(){
    int n,la = 0,lb = 0;
    cin >> n;
    for(int i = 1;i<=n;i++){
        int a;
        cin >> a;
        if(a == 1){
           if(la == 1){
            la = 0;
           }else if(la == 0){
                    la =1;
           }
        }
        else if(a == 2){
                if(la == 1){
                    la = 0;
                }else if(la == 0){
                        la = 1;
                }
                if(lb == 1){
                    lb = 0;
                }
                else if(lb == 0){
                    lb = 1;
                }
        }
    }
cout << la << endl << lb;
}
