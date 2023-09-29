#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include "pilha.h"
#include "fila.h"

int main(int argc, char *argv[])
{
    printf("\t\tSISTEMA DE FILAS - FILA BANCO\n");
    Pessoa p1;
    Pessoa p2;
    Pessoa p3;
    Pessoa* p;
    //distribuição de senhas
    p1.senha = 'A'; 
    p2.senha = 'B';
    p3.senha = 'C';

    
    Fila* F = fila();
    enfileirar(&p1, F);
    enfileirar(&p2, F);
    enfileirar(&p3, F);


    do{
        p = desenfileirar(F);
    }while(p != NULL);
    
    
    
    int opcao = 0;
    scanf("%d", &opcao);

    if(opcao != 0){
        system("cls");
    }
    printf("\t\tSISTEMA DE PILHAS - Baralho de Cartas\n");
    
    Objeto o1;
    Objeto o2;
    Objeto o3;
    Objeto o4;


    Objeto* o;
    o1.valor = 'A';
    o2.valor = '1';
    o3.valor = '2';
    o4.valor = '4';


    Pilha* P = pilha();
    empilhar(&o1, P);
    empilhar(&o2, P);
    empilhar(&o3, P);
    empilhar(&o4, P);

    do{
        o = desempilhar(P);
    }while(o != NULL);

    exit(0);
}