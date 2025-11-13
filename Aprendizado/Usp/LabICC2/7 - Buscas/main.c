/*
Alunos: Christyan Paniago Nantes (15635906) e Giovanna Nascimento Noventa (15637210)
Disciplina: Laboratório de Introdução à Ciência da Computação II (SCC0220)
Atividade: Não Podia ser mais curto (Entregável 7)
*/

#include <stdio.h>
#include <stdlib.h>

/*
Buscar Q datas em um vetor de N datas ordenadas.
0 < Q <= N ?
Return: "Encontrada" ou "Nao_encontrada"
1 - binary search
2 - hash search
3 - linear search
*/

// Hash table with chaining (memory efficient)
#define HASH_PRIME 100003  // Prime number for better distribution

// Hash table node, it has an value and pointer to next node
typedef struct Node { //structure of an node, for hash table
    int value; 
    struct Node* next;
} Node;

// Hash table struct, it has nodes and an size
typedef struct {
    Node** buckets;
    int size; 
} HashTable;

int hash_function(int key, int table_size) {
    // MurmurHash-inspired bit mixing for uniform distribution
    // Each round: (1) fold high bits into low bits via right shift + XOR, (2) multiply by magic constant to spread bits
    // This creates avalanche effect: small input changes produce drastically different outputs
    unsigned int hash = (unsigned int)key;
    hash = ((hash >> 16) ^ hash) * 0x45d9f3b;  // First mixing round
    hash = ((hash >> 16) ^ hash) * 0x45d9f3b;  // Second mixing round
    hash = (hash >> 16) ^ hash;                 // Final fold
    return hash % table_size;
}

HashTable* create_hash_table(int size) {
    HashTable* ht = (HashTable*)malloc(sizeof(HashTable));
    ht->size = size;
    ht->buckets = (Node**)calloc(size, sizeof(Node*));
    return ht;
}

void hash_insert(HashTable* ht, int value) {
    int index = hash_function(value, ht->size);
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->value = value; 
    new_node->next = ht->buckets[index]; // insert at the beginning of that index (chaining)
    ht->buckets[index] = new_node; // update bucket head
}

int hash_search(HashTable* ht, int value) {
    int index = hash_function(value, ht->size);
    Node* current = ht->buckets[index];
    while (current != NULL) { // if has more than one element in the chain
        if (current->value == value) {
            return 1;
        }
        current = current->next;
    }
    return 0;
}

void free_hash_table(HashTable* ht) {
    for (int i = 0; i < ht->size; i++) { // goes through all buckets
        Node* current = ht->buckets[i];
        while (current != NULL) { // free all nodes in the chain
            Node* temp = current;
            current = current->next;
            free(temp);
        }
    }
    free(ht->buckets);
    free(ht);
}

int concatenate_date(int day, int month, int year){
    return year * 10000 + month * 100 + day;
    // Formato: YYYYMMDD
    // 10-05-2010 -> 20100510
}

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

int main(){
    int n;

    scanf("%d", &n);
    
    // uses an basic array to initially store the dates, if hash search is selected, it will be transferred to the hash table
    int arr[n]; // YYYYMMDD

    for(int i = 0;i<n;i++){
        int day, month, year;
        scanf("%2d-%2d-%4d", &day, &month, &year);
        int date = concatenate_date(day, month, year);
        arr[i] = date;
    }

    int qnt; // number of search keys
    scanf("%d", &qnt);
    int chaves[qnt]; // array to store search keys
    for(int i = 0;i<qnt;i++){
        int day, month, year;
        scanf("%2d-%2d-%4d", &day, &month, &year); // read date in DD-MM-YYYY format
        int date = concatenate_date(day, month, year);
        chaves[i] = date;
    }

    int op; // search method option
    scanf("%d", &op);

    switch (op) {
        case 1: {
            // binary search
            quick_sort(arr, n); // ensure array is sorted
            
            for(int i = 0; i < qnt; i++) { // do n (qnt of keys) searches
                int l = 0, r = n-1, mid;
                int found = 0;
                while (l <= r){
                    mid = (l + r) / 2;
                    if(arr[mid] == chaves[i]){
                        printf("ENCONTRADA\n");
                        found = 1;
                        break;
                    }
                    else if(arr[mid] < chaves[i]){
                        l = mid + 1;
                    }
                    else{ // arr[mid] > chaves[i]
                        r = mid - 1;
                    }
                }
                if(!found){
                    printf("NAO_ENCONTRADA\n");
                }
            }
            break;
        }
        case 2: {
            HashTable* ht = create_hash_table(HASH_PRIME); // create hash table
            
            for(int i = 0; i < n; i++){ // insert all dates into hash table
                hash_insert(ht, arr[i]); 
            }
            
            for(int i = 0; i < qnt; i++){ // do n (qnt of keys) searches
                if(hash_search(ht, chaves[i])){
                    printf("ENCONTRADA\n");
                } else {
                    printf("NAO_ENCONTRADA\n");
                }
            }
            
            free_hash_table(ht);
            break;
        }
        case 3: {
            // linear search
            for(int i = 0; i < qnt; i++){ // do n (qnt of keys) searches
                int found = 0;
                for(int j = 0; j < n; j++){
                    if(arr[j] == chaves[i]){
                        printf("ENCONTRADA\n");
                        found = 1;
                        break;
                    }
                }
                if(!found){
                    printf("NAO_ENCONTRADA\n");
                }
            }
            break;
        }
    }

}
