/*
Alunos: Christyan Paniago Nantes (15635906) e Giovanna Nascimento Noventa (15637210)
Disciplina: Laboratório de Introdução à Ciência da Computação II (SCC0220)
Atividade: Sem sort (Entregável 6)
*/

#include "util.h"
#include <stdbool.h>

#define SEED 12345 //seed passada no enunciado

static int seed_state = SEED; // Variável estática para manter o estado

bool IsSorted(int *vetor, int N){
    for(int i = 0;i<N-1;i++){
        if(vetor[i]>vetor[i+1]){
            return false;
        }
    }
    return true;
}

void gerar_vetor_aleatorio(int* vetor, int n) {
    for (int i = 0; i < n; i++) {
        vetor[i] = get_random(&seed_state, n);
    }
}

void FisherYatesShuffle(int *vetor, int N){
    for(int i = N - 1; i >= 1; i--){
        int j = get_random(&seed_state, i) - 1; // Função previamente oferecida em util.h
        int aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
    }
}

int BogoSort(int *vetor, int N){
    int cont = 0;
    while(!IsSorted(vetor,N)){
        FisherYatesShuffle(vetor,N);
        cont++;
    }
    return cont;
}

int main(){
    int n,cont = 0;
    scanf("%d", &n);
    int *vetor = (int*)malloc(n*sizeof(int));  
    gerar_vetor_aleatorio(vetor, n);
    cont = BogoSort(vetor,n);
    printf("%d\n", cont);
    for(int i = 0;i<n-1;i++){
        printf("%d ", vetor[i]);
    }
    printf("%d", vetor[n-1]);
    free(vetor);
    return 0;
}