#include <stdio.h>
#include <stdbool.h>
#include "fila.h"
#include "item.h"

void fila_apagar_rec(NO **no){
    if(*no == NULL) return;
    fila_apagar_rec(&(*no)->proximo);
    item_apagar(&(*no)->item);
    free(*no);
    *no = NULL;
}

void fila_apagar(FILA **fila){
    if(fila == NULL || *fila == NULL) return;
    fila_apagar_rec(&(*fila)->inicio);
    free(*fila);
    *fila = NULL;
    //printf("Fila Vazia!");
}
