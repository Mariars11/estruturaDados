#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* pilha(){
    Pilha *p1 = (Pilha*) malloc(sizeof(Pilha));
    p1->topo = NULL;
    p1->quantidade = 0;
    return p1;
}

void empilhar(Objeto* o, Pilha* P){ //push
    printf("\n\t + Colocando carta %c na mesa\n", o->valor);
    o->proximo_objeto = P->topo;
    P->topo = o;
    P->quantidade += 1;
}

Objeto* desempilhar(Pilha* P){ //pop
    if(P->quantidade == 0){
        return NULL;
    }
    Objeto* o = P->topo;
    printf("\n\t - Retirando carta %c da pilha\n", o->valor);
    P->topo = o->proximo_objeto;
    P->quantidade--;
    return o;
}
