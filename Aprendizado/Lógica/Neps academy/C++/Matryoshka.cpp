#include <iostream>
#include <algorithm>
using namespace std;
int V[100005],C[100005],R[100005];
main(){
    int N,k = 0;
    cin >> N;
    for(int i = 0;i<N;i++){
        cin >> V[i];
        C[i]=V[i];
    }
    sort(C,C+N);
    for(int i = 0;i<N;i++){
        if(V[i] != C[i]){
            R[k]= V[i];
            k++;
        }
    }
    sort(R,R+k);
    cout << k << endl;
    if(k!=0){
    for(int i = 0;i<k;i++){
        cout << R[i] << " ";
    }
    }
}
