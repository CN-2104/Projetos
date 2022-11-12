#include <iostream>
using namespace std;
main(){
    int N,cont = 0;
    cin >> N;
    int V[(N+10)];
    for(int i = 0;i < N;i++){
        cin >> V[i];
    }
    for(int i = 0;i < N;i++){
         if((i!=0)&&(i!=(N-1)))
            if(((V[i-1])==1)&&((V[i])==0)&&((V[i+1])==0))
            cont +=1;
    }
    cout << cont;
}
