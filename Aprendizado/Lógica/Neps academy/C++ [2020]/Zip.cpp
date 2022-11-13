#include <iostream>
#include <cstdlib>
using namespace std;
int pontuacao( int a, int b ){
  int p = a + b;
  if ( a == b ) p *= 2;
  if ( abs(a-b) == 1 ) p *= 3;
  return p;
}
int main(){
    int l1,l2,c1,c2, resl = 0, resc = 0;
    cin >> l1 >> l2 >> c1 >> c2;
    resl = pontuacao(l1,l2);
    resc = pontuacao(c1,c2);

    if(resl>resc)
        cout << "Lia";
    if(resl<resc)
        cout << "Carolina";
    if(resl==resc)
        cout << "empate";
}
