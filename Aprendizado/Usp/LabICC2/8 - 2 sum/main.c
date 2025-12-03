/*
Alunos: Christyan Paniago Nantes (15635906) e Giovanna Nascimento Noventa (15637210)
Disciplina: Laboratório de Introdução à Ciência da Computação II (SCC0220)
Atividade: Somas (Entregável 8)
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
Buscar M números em um vetor de N números ordenados.
0 < M <= 10ˆ6 
0 < N <= 10ˆ6
recebe-se um numero K e se busca se existe a,b tal que a + b = K
Opções de busca: (hardcoded)
0 - Busca linear com ordenação (parada otimizada)
1 - Busca binária com ordenação
*/

#define SORT 0  // Hardcoded sorting option

void quicksort_rec(int *vetor, int l, int r){
    int i = l, j = r;
    int aux, x = vetor[(l+r)/2];
    do{
        while (vetor[i] < x){
            i++;
        }
        while (vetor[j] > x){
            j--;
        }
        if(i<= j){
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            i++; 
            j--;
        }
    }while(i <= j);
    if(l<j){
        quicksort_rec(vetor,l,j);
    }
    if(i<r){
        quicksort_rec(vetor,i,r);
    }
}

void quick_sort(int *vetor, int n){
    quicksort_rec(vetor, 0, n-1);
}

int binary_search(int *vetor, int left, int right, int target){ 
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(vetor[mid] == target){
            return 1;
        }
        else if(vetor[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return 0;
}

int main(){
    int n,m,k;
    scanf("%d", &n);
    int *vetor = (int *) malloc(n * sizeof(int));

    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    scanf("%d", &m);
    
    quick_sort(vetor, n);
    
    for(int query = 0; query < m; query++){
        scanf("%d", &k);
        bool found = 0;
        
        if (SORT == 0){
            // Busca linear com parada otimizada
            for(int i = 0; i < n - 1 && !found; i++){
                // Parada otimizada se o valor atual já excede k
                if (vetor[i] > k) {
                    break;
                }

                int comp = k - vetor[i];

                for(int j = i + 1; j < n; j++){
                    if (vetor[j] == comp){
                        found = 1;
                        break;
                    }
                    else if (vetor[j] > comp){
                        // Como o vetor está ordenado, os próximos valores só serão maiores
                        break;
                    }
                }
            }
        }
        else if (SORT == 1) {
            // Busca binária para o complemento
            for(int i = 0; i < n - 1 && !found; i++){
                int comp = k - vetor[i];
                if(binary_search(vetor, i + 1, n - 1, comp)){
                    found = 1;
                }
            }
        }
        
        if(found){
            printf("S\n");
        }
        else{
            printf("N\n");
        }
    }
    
    free(vetor);
    return 0;
}
