#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
        if(tolower(H->valor) == tolower(valor_busca)){
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
        if(tolower(H->valor) == tolower(valor_busca)){
            return 1;
        }
        else{
            return lista_verificar_existencia(H->proximo_no, valor_busca);
        }
    }
    return 0;
}
int encontrar_posicao(No *H, char valor_busca, int posicao){
    int i = posicao;
    if(H != NULL){
        if(tolower(H->valor) == tolower(valor_busca)){
            return i;
        }
        else{
            i++;
            return encontrar_posicao(H->proximo_no, valor_busca, i);
        }
    }
    return 0;
}
No *inverter_lista(No *H){

    if(H->proximo_no==NULL)
        return H;

    No *r = inverter_lista(H->proximo_no);

    H->proximo_no->proximo_no=H;
    H->proximo_no=NULL;

    return r; // 
}
void lista_imprimir_inversa(No *H){
    lista_imprimir(inverter_lista(H));
}
void lista_inserir_no_i(No *H, int i){
    //Adicionar um novo nó
    No *novo_no = no('B', NULL);
    while(i != 1){
        H = H->proximo_no;
        i--;
    }

    novo_no->proximo_no = H->proximo_no;
    H->proximo_no = novo_no;
}
void lista_remover_no_i(No  **H, int i){
    i += 1; 
    No *no_atual = *H;
    No *no_anterior = *H;
    if(*H == NULL){
        printf("\nLista esta vazia!");
    }
    else if(i == 1){
        *H = no_atual->proximo_no;
        free(no_atual);
        no_atual = NULL;
    }
    else{
        while(i != 1){
            no_anterior = no_atual;
            no_atual = no_atual->proximo_no;
            i--;
        }
        no_anterior->proximo_no = no_atual->proximo_no;
        free(no_atual);
        no_atual = NULL;
    }
}
void lista_remover_no(No *H, char valor_busca){
    if(H != NULL){
        int qtd = lista_verificar_ocorrencias(H, valor_busca);
        while(qtd != 0){
            int i = encontrar_posicao(H, valor_busca, 0);
            if(i != 0){
                lista_remover_no_i(&H, i);
            }
            qtd--;
        }
    }
}