#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila* fila(){
    Fila *f1 = (Fila*) malloc(sizeof(Fila));
    f1->inicio = NULL;
    f1->quantidade = 0;
    return f1;
}

void enfileirar(Pessoa* o, Fila* F){ //dequeue
    printf("\n\t + Senha %c salva para atendimento\n", o->senha);
    if(F->inicio == NULL) //Se estiver vazio, o objeto é o inicio e o fim
    {
        F->inicio = o;
        F->final = o;
    }
    else //O objeto que era o final, faz referencia ao novo final; 
    {
        F->final->objetoAnterior = o;
        F->final = o;
    }
    F->quantidade += 1;
}

Pessoa* desenfileirar(Fila* F){ //queue 
    if(F->quantidade == 0){
        return NULL;
    }
    Pessoa* o = F->inicio; //Recebe o objeto ao inicio
    printf("\n\t - Senha %c atendida\n", o->senha);
    F->inicio = o->objetoAnterior; //Atualiza o novo inicio
    F->quantidade--;
    return o; //retorna o objeto que estava no inicio
}