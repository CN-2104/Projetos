#include <iostream>
#include <algorithm>
using namespace std;
main(){
    int N;
    cin >> N;
    int V[(N+10)];
    for(int i =0;i<N;i++){
    cin >> V[i];
    }
    sort(V,V+N);

    for(int i =0;i<N;i++){
    cout << V[i] << " ";
    }
}
