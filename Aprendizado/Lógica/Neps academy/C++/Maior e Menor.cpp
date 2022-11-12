#include <iostream>
#include <algorithm>
using namespace std;
int V[105];
int main(){
    int N;
    cin >> N;
    for(int i = 0;i<N;i++){
        cin >> V[i];
    }
    sort(V,V+N);
    cout << V[N-1] << endl << V[0];
}
