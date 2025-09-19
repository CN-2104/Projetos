#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Constants - Define all magic numbers
#define MAX_STRING_SIZE 1000
#define MAX_GRUPO_SIZE 10 // (usp ou externa)
#define MAX_NOME_SIZE 1000
#define MAX_PEOPLE 80000

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

void Separa_grupos(char usp[], int* iusp, char ext[],  int* iext, char str[]){
    int i = 0;
    char grupo[MAX_GRUPO_SIZE] = {0};
    memset(grupo, 0, sizeof(grupo)); // Inicializa o array grupo com zeros
    int len = strlen(str);

    while(str[i] != '\0'){
        if(str[i] == '-'){
            int grupo_len;
            if(str[len-1] == '\n'){
                grupo_len = len-i-3; // para remover o '\n' no final da string
            }else{
                grupo_len = len-i-2;
            }
            strncpy(grupo, str+i+2, grupo_len);
            grupo[grupo_len] = '\0';
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
    char nome[MAX_NOME_SIZE] = {0};
    strncpy(nome, str, i-1); // -1 para não pegar o espaço antes do '-'
    nome[i] = '\0';
    int tam_nome = count_chars(nome);
    if(strcmp(grupo, "usp") == 0){
        //printf("%d\n", tam_nome);
        usp[*iusp] = (char)tam_nome;
        (*iusp)++;
        //printf("USP");
    }else{
        ext[*iext] = (char)tam_nome;
        (*iext)++;
    }
}

void bubble_sort(char *arr, int size, int *comp, int *mov){
    *comp = 0;
    *mov = 0;
    for(int i = 0;i<size-1;i++){
        for (int j = 0;j<size-i-1;j++){
            if(arr[j] > arr[j+1]){
                char temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                (*mov)++;
            }
            (*comp)++;
        }
    }
}

int main() {
    char str[MAX_STRING_SIZE];
    char usp[MAX_PEOPLE];
    char ext[MAX_PEOPLE];
    int iusp = 0, iext = 0;
    int comp = 0, mov = 0;
    while (fgets(str,sizeof(str),stdin)) {
        Separa_grupos(usp, &iusp, ext, &iext, str);
        memset(str, 0, sizeof(str)); // Limpa a string para a próxima leitura
    }

    bubble_sort(usp, iusp, &comp, &mov);
    if(iusp > 0) {
        printf("USP - [%d", usp[0]);
        for(int i = 1;i<iusp;i++){
            printf(", %d", usp[i]);
        }
        printf("]\n");
        printf("Comparações: %d, Trocas: %d\n", comp, mov);
    } else {
        printf("USP - []\n");
        printf("Comparações: 0, Trocas: 0\n");
    }

    printf("\n");
    bubble_sort(ext, iext, &comp, &mov);
    if(iext > 0) {
        printf("Externa - [%d", ext[0]);
        for(int i = 1;i<iext;i++){
            printf(", %d", ext[i]);
        }
        printf("]\n");
        printf("Comparações: %d, Trocas: %d\n", comp, mov);
    } else {
        printf("Externa - []\n");
        printf("Comparações: 0, Trocas: 0\n");
    }
}