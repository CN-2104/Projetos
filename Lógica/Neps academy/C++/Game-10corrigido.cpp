#include <iostream>

using namespace std;
int main() {
    int n , d , a;
    cin>>n>>d>>a;
    if(a==d) cout<<0;
    else if(a>d) cout<<n-a+d;
    else if(a<d) cout<<d-a;

   }

