#include <stdio.h>
struct cidade{
    int population;
    char name[50];
};

int main(){
    int n;
    scanf("%d",&n);
    getchar();
    if(n<2 || n>10){
        printf("n fora do intervalo.");
        return 0;
    }

    struct cidade cidades[n];

    for(int i = 0;i<n;i++){
        scanf(" %[^\r]s", cidades[i].name);
        //getchar();
        scanf(" %d",&cidades[i].population);
        getchar();
    }

    int big = cidades[0].population;
    int ind = 0;
    for(int i = 0;i<n;i++){
        if(cidades[i].population > big){
            ind = i;
            big = cidades[i].population;
        }
    }

    printf("%s %d",cidades[ind].name, cidades[ind].population);

}
