#include <iostream>
using namespace std;
int main(){
    int x,j=0,k=0;
    int V1[15],V2[15];
    for(int i = 0;i<10;i++){

        cin >> x;
        if(x % 2==0){
            V1[j] = x;
            j++;
        }
        else{
            V2[k] = x;
            k++;
        }
    }
    for(int i = 0;i<j;i++){
        cout << V1[i] << " ";
    }
    cout << endl;

    for(int i = 0;i<k;i++){
        cout << V2[i] << " ";
    }
}
