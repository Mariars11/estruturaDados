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
void lista_inserir_no(No** L, float valor) {
    No* novo = no(valor, NULL);
    novo->proximo_no = *L;
    *L = novo;
}
void lista_imprimir(No* L) {
    while (L != NULL) {
        printf("\nNo: %.2f ", L->valor);
        L = L->proximo_no;
    }
    printf("\n");
}
void lista_inserir_no_ordenado(No** L, float valor) {
    No* novo_no = no(valor, NULL);

    if (*L == NULL || valor < (*L)->valor) {
        novo_no->proximo_no = *L;
        *L = novo_no;
    }
    else{
        // Otherwise, find the last element that is smaller than this node
        No *needle = *L;
        while (1) {
            if (needle->proximo_no == NULL)
                break;
            if (novo_no->valor < needle->proximo_no->valor)
                break;
            needle = needle->proximo_no;
        }

        // Insert the element
        novo_no->proximo_no = needle->proximo_no;
        needle->proximo_no = novo_no;
    }

    
    // No* novo_no = no(valor, NULL);
    // if (*L == NULL || valor < (*L)->valor) {
    //     novo_no->proximo_no = *L;
    //     *L = novo_no;
    // } else {
    //     No* atual = *L;
    //     while (atual->proximo_no != NULL && valor > atual->proximo_no->valor) {
    //         atual = atual->proximo_no;
    //     }
    //     novo_no->proximo_no = atual->proximo_no;
    //     atual->proximo_no = novo_no;
    // }
}