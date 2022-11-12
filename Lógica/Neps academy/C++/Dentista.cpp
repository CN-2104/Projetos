#include <iostream>
#include <algorithm>

using namespace std;

struct cons{
   int ini, fim;
};

int comp(int a, int b){
   return a.fim<b.fim;

}

int main(){
   int N, i, k=0, ter=0;
   int V[10100];

   cin>>N;

   for(i=0;i<N;i++){
       cin>>V[i].ini>>V[i].fim;
   }

   sort(V, V+N, comp);

   for(i=0;i<N;i++){
      if(V[i].ini>=ter){
        k++;
        ter=V[i].fim;
      }
   }

   cout<<k<<endl;
}
