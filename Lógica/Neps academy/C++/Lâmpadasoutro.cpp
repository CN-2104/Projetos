#include <iostream>
using namespace std;
main(){
    int n,p,l;
    bool la = 0,lb = 0;
    cin >> n;
    for(int i = 1;i <= n;i++){
        int b;
        cin >> b;
        if(b == 1){
            p += 1;
        }else if(b == 2){
                l += 1;
        }
    }
   if(p%2==0 && l%2==0)
        cout << "0" << endl << "0";
    if(p%2==0 && l%2!=0)
        cout << "1" << endl << "1";
    if(p%2!=0 && l%2==0)
        cout << "1" << endl << "0";
    if(p%2!=0 && l%2!=0)
        cout << "0" << endl << "1";
}
