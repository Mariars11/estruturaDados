#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include <string.h>

int main(int argc, char *argv[])
{
    No *n0 = no('C', NULL);
    No *n1 = no('Z', NULL);
    No *n2 = no('M', NULL);
    No *n3 = no('F', NULL);
    No *n4 = no('R', NULL);
    No *n5 = no('J', NULL);
    No *n6 = no('W', NULL);
    No *n7 = no('R', NULL);
    //nó cabeça (head) e o nó a ser inserido ao final da lista
    lista_inserir_no(n0, n1);
    lista_inserir_no(n0, n2);
    lista_inserir_no(n0, n3);
    lista_inserir_no(n0, n4);
    lista_inserir_no(n0, n5);
    lista_inserir_no(n0, n7);
    printf("\nLista original\n");
    lista_imprimir(n0);
    printf("\nVerifica existencia:");
    printf("\nExiste A: %d", lista_verificar_existencia(n0, 'A'));
    printf("\nVerifica ocorrencia:");
    printf("\nQuantidade de Rs: %d", lista_verificar_ocorrencias(n0, 'R'));
    printf("\nLista Inversa\n");
    No *listaCopiada = copiar_lista(n0);
    lista_imprimir_inversa(listaCopiada);
    printf("\nLista inserir posicao 3\n");
    lista_inserir_no_i(n0, 3);
    lista_imprimir(n0);
    liberar_lista(n0);
    liberar_lista(listaCopiada);

    return 0;
}