#include <iostream>
using namespace std;
main(){
    int N,x;
    cin >> N;
    int V[(N+10)];
    for(int i =0;i<N;i++){
        cin >> V[i];
    }
    for(int i =0;i<N;i++){
        x = 0;
        if(V[i]==1){
            x +=1;
            if(V[i+1]==1)
                x +=1;
            if(i!=0)
                if(V[i-1]==1)
                    x +=1;
        }
            else
            if(V[i]==0){
            if(V[i+1]==1)
                x +=1;
            if(i!=0)
            if(V[i-1]==1)
                x +=1;
            }
        cout << x <<endl;
    }
}
