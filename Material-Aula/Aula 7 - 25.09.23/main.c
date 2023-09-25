#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(int argc, char *argv[])
{
    // // Fila
    // Estrutura de lista encadeada  
    // FIFO - first in first out
    Objeto o1;
    Objeto o2;
    Objeto o3;
    Objeto* o;
    o1.valor = 'A';
    o2.valor = 'B';
    o3.valor = 'C';


    Fila* F = fila();
    enfileirar(&o1, F);
    enfileirar(&o2, F);
    enfileirar(&o3, F);


    do{
        o = desenfileirar(F);
        if(o != NULL){
            printf("%c\n", o->valor);
        }
    }while(o != NULL);

    exit(0);
}