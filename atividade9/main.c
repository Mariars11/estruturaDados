#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "lista.h"

int main(int argc, char *argv[]){
    FILE *stream = fopen(argv[1], "r"); //"r" - read
    
    if(stream == NULL){
        perror("Nao foi possivel abrir o arquivo");
        exit(1);
    }
    
    No *Desordenado = NULL;
    No *Ordenado = NULL;
    long long int qtdLinhas = 0;
    clock_t start_desordenado = clock();
    
    float numero;
    
    while (fscanf(stream, "%f", &numero) == 1) {
        lista_inserir_no(&Desordenado, numero);
        qtdLinhas++;
        if((qtdLinhas % 10000) == 0){
            printf("\nlinhas desordenado: %lld", qtdLinhas);
        }
    }
    
    clock_t end_desordenado = clock();
    double seconds_desordenado = (double)(end_desordenado - start_desordenado) / CLOCKS_PER_SEC;

    fclose(stream);
        printf("\nTempo do desordenado: %f", seconds_desordenado / qtdLinhas);

    stream = fopen(argv[1], "r");
    clock_t start_ordenado = clock();
    qtdLinhas = 0;
    while (fscanf(stream, "%f", &numero) == 1) {
        lista_inserir_no_ordenado(&Ordenado, numero);
        qtdLinhas++;
        if((qtdLinhas % 100000) == 0){
            printf("\nlinhas ordenado: %lld", qtdLinhas);
        }
    }
    
    clock_t end_ordenado = clock();
    double seconds_ordenado = (double)(end_ordenado - start_ordenado) / CLOCKS_PER_SEC;

    // printf("\nLista Desordenada\n");
    // lista_imprimir(Desordenado);
    // printf("\nLista Ordenada\n");
    // lista_imprimir(Ordenado);
    printf("linhas: %lld", qtdLinhas);
    printf("\nTempo do ordenado: %f", seconds_ordenado / qtdLinhas);

    fclose(stream);
    
    return 0;
}