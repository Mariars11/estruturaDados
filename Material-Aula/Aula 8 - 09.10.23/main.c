#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char *argv[])
{
    //Lista encadeada
        //aponta para o nó da frente e para trás
        //modificar um item em qualquer posição
    //params - valor do nó, proximo nó
    No *n0 = no('C', NULL);
    No *n1 = no('Z', NULL);
    No *n2 = no('M', NULL);
    No *n3 = no('F', NULL);
    No *n4 = no('R', NULL);
    No *n5 = no('J', NULL);
    No *n6 = no('W', NULL);

    //nó cabeça (head) e o nó a ser inserido ao final da lista
    lista_inserir_no(n0, n1);
    lista_inserir_no(n0, n2);
    lista_inserir_no(n0, n3);
    lista_inserir_no(n0, n4);
    lista_inserir_no(n0, n5);

    

    printf("\nQuantidade de nos: %d", lista_quantidade_nos(n0));

    printf("\nLista Copiada:\n");
    lista_imprimir(copiar_lista(n0));
    lista_inserir_no(n0, n6);
    printf("\nQuantidade de nos: %d", lista_quantidade_nos(n0));
    printf("\nLista Atualizada:\n");
    lista_imprimir(n0);
    concatenar_lista(n0, copiar_lista(n0));
    printf("\nLista Concatenada:\n");
    lista_imprimir(n0);
    return 0;
}