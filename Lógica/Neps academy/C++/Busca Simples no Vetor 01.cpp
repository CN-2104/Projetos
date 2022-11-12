#include <iostream>
using namespace std;
int V[15];
int main(){
    int x;
    for(int i = 0;i<10;i++)
        cin >> V[i];
    cin >> x;
    for(int i = 0;i<10;i++)
        if(V[i]==x){
            cout << "SIM";
            return 0;
        }
        cout << "NAO";
}
