#include <iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    int V[N+10][N+10],c[N+10],l[N+10];
    for(int i=0;i<N;i++){
        l[i]= 0;
        c[i]= 0;
    }
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++){
           cin>>V[i][j];
            l[i]+= V[i][j];
            c[j]+= V[i][j];
        }
    int m=0,s;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            s =c[j]+l[i] - 2*V[i][j];

        if(s>m)
        m=s;
        }
    }
    cout << m;
}
