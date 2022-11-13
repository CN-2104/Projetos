#include <iostream>
using namespace std;
main(){
double a,b,c;
cin >> a >> b;
c = ((a+b)/2);
if(c >= 7){
cout << "Aprovado";
}
if((c < 7) && (c  >= 4)){
cout << "Recuperacao";
}
if(c < 4){
cout << "Reprovado";
}
}
