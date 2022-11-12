#include <iostream>
using namespace std;
int main(){
    string in,res,invres;
    cin >> in;
    for(int i = 0;i<in.size();i++){
        if((in[i]=='a')||(in[i]=='e')||(in[i]=='i')||(in[i]=='o')||(in[i]=='u')){
            res+=in[i]; // string ++ adiciona na frente
        }
    }
    for(int i = res.size()-1;i>=0;i--){
        invres+=res[i]; // inverte
    }
    if(res==invres){
        cout << "S";
    }
    else{
        cout << "N";
    }

}
