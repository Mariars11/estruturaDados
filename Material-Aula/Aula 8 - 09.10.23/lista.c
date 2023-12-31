#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

No *no(char valor, No *proximo_no){
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
        printf("No: %c\n", H->valor);
        lista_imprimir(H->proximo_no);
    }
    else{
        printf("A lista esta vazia!\n");
    }   
}
int lista_quantidade_nos(No *H){
    if(H != NULL){
        return 1 + lista_quantidade_nos(H->proximo_no);
    }
    return 0;
}

No *copiar_lista(No *C){
    if(C != NULL){
       return no(C->valor, copiar_lista(C->proximo_no));
    }

    return NULL;
}
void concatenar_lista(No *H, No * Hc){
    lista_inserir_no(H, Hc);
}
//verificar erro aqui
void liberar_lista(No* H){
    if(H != NULL){
        liberar_lista(H->proximo_no);
        H = NULL;
        free(H);
    }
}
//Acrescentar o tolower
int lista_verificar_ocorrencias(No *H, char valor_busca){
    if(H != NULL){
        if(H->valor == valor_busca){
            return lista_verificar_ocorrencias(H->proximo_no, valor_busca) + 1;
        }
        else{
            return lista_verificar_ocorrencias(H->proximo_no, valor_busca);
        }
    }
    return 0;
}
int lista_verificar_existencia(No *H, char valor_busca){
    if(H != NULL){
        if(H->valor == valor_busca){
            return 1;
        }
        else{
            return lista_verificar_existencia(H->proximo_no, valor_busca);
        }
    }
    return 0;
}
void lista_imprimir_inversa(No *H){

}
void lista_inserir_no_i(No *H, int i){

}
void lista_remover_no_i(No* L, int i){

}
void lista_remover_no(No *H, char valor_busca){

}