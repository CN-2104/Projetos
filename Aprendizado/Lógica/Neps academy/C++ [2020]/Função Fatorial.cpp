#include <iostream>
using namespace std;

int ft(int n){
    int res;
	if((n == 0)||(n == 1)){
        return 1;
    }
    for(int i = 0;i<n;i++){
        res = ft(n-1)*n;
        return res;
    }
}
int main(){
    int n;
    cin >> n;
    cout << ft(n);

}
