#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "lista.h"

No *no(float valor, No *proximo_no){
    No *node = (No*)malloc(sizeof(No));
    node->valor = valor;
    node->proximo_no = proximo_no;

    return node;
}
void lista_inserir_no(No *H, No *no){
    if(H != NULL){
        if(H->proximo_no == NULL){
            H->proximo_no = no;
        }
        else{
            lista_inserir_no(H->proximo_no, no);
        }
    }
}
void lista_imprimir(No *H){
    if(H != NULL){
        printf("No: %.2f\n", H->valor);
        lista_imprimir(H->proximo_no);
    }   
}