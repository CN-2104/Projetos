#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_chars(char str[]){
    //printf("String: %s\n", str);
    int count = 0;
    int i = 0;
    while(str[i] != '\0'){
        if(isalpha(str[i])) { // remove alphanumeric characters and spaces
            //printf("Char: %c ", str[i]);
            count++;
        }
        i++;
    }
    //printf("\n");
    //printf("Count: %d\n", count);
    return count;
}

int rec_count_chars(char str[], int index){
    if(str[index] == '\0') return 0;
    if(isalpha(str[index])) return 1 + rec_count_chars(str, index + 1);
    return rec_count_chars(str, index + 1);
}

void Separa_grupos(int usp[], int* iusp, int ext[],  int* iext, char str[]){
    int i = 0;
    char grupo[100] = {0};
    memset(grupo, 0, sizeof(grupo)); // Inicializa o array grupo com zeros
    int len = strlen(str);

    while(str[i] != '\0'){
        if(str[i] == '-'){
            strncpy(grupo, str+i+2, len-i-3); // +2 para pular o '-' e o espaço, e -3 para não pegar o '\n'
            grupo[len-i-3] = '\0'; // Adiciona o terminador nulo se eu tirei ele acima
            break;
        }
        i++;
    }

    //printf("%s\n", grupo);
    /*
    char nome[100];
    strncpy(nome, str, i);
    nome[i] = '\0';
    printf("Nome: %s\n", nome);
    */
    //printf("%d\n",strcmp(grupo, "usp"));
    char nome[100] = {0};
    strncpy(nome, str, i-1); // -1 para não pegar o espaço antes do '-'
    nome[i] = '\0';
    int tam_nome = rec_count_chars(nome, 0);
    if(strcmp(grupo, "usp") == 0){
        //printf("%d\n", tam_nome);
        usp[*iusp] = tam_nome;
        (*iusp)++;
        //printf("USP");
    }else {
        ext[*iext] = tam_nome;
        (*iext)++;
    }

}

int main() {
    char str[100];
    int usp[100];
    int ext[100];
    int iusp = 0, iext = 0;
    while (fgets(str,100,stdin)) {
        Separa_grupos(usp, &iusp, ext, &iext, str);
        memset(str, 0, sizeof(str)); // Limpa a string para a próxima leitura
    }

    printf("USP - [%d", usp[0]);
    for(int i = 1;i<iusp;i++){
        printf(", %d", usp[i]);
    }
    printf("]\n");

    printf("Externa - [%d", ext[0]);
    for(int i = 1;i<iext;i++){
        printf(", %d", ext[i]);
    }
    printf("]\n");
}