#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(int argc, char *argv[]){
    // // Pilha 
    //Last in first out - LIFO
    //usado no navegador, por exemplo
    Objeto *o;

    Objeto o1;
    o1.valor = 'A';
    
    Pilha *p = pilha();
    empilhar(&o1, p);
    
    Objeto o2;
    o2.valor = 'B';
    empilhar(&o2, p);

    do{
        o = desempilhar(p);
        if(o != NULL){
            printf("%c\n", o->valor);
        }
    }while(o != NULL);
    
    
    exit(0);
}