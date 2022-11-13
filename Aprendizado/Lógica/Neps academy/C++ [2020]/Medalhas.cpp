#include <iostream>
using namespace std;
main(){
    int a,b,c;
    cin >> a >> b >> c;
    if((a<b)&&(b<c)&&(a<c))
        cout << "1" << endl << "2" << endl << "3";
    if((a<b)&&(c<b)&&(a<c))
        cout << "1" << endl << "3" << endl << "2";
    if((b<a)&&(a<c)&&(b<c))
        cout << "2" << endl << "1" << endl << "3";
    if((b<a)&&(c<a)&&(b<c))
        cout << "2" << endl << "3" << endl << "1";
    if((c<a)&&(b<a)&&(c<b))
        cout << "3" << endl << "2" << endl << "1";
    if((c<a)&&(a<b)&&(c<b))
        cout << "3" << endl << "1" << endl << "2";
}
