#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    int cont = 0;

    fgets(str,100,stdin);

    while(str[cont] != '\0'){
        str[cont]++;
        cont++;
    }

    printf("%s",str);
}
