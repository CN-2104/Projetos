#include <iostream>
using namespace std;

int fb(int n){
    int res;
    if((n == 0)||(n == 1)){
        return 1;
    }
    for(int i = 0;i<n;i++){
        res = fb(n-1)+fb(n-2);
        return res;
    }
}

int main(){
    int n;
    cin >> n;
    cout << fb(n);
}
