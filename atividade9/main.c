#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char *argv[]){
    //abre o arquivo passado como argumento
    FILE *stream = fopen(argv[1], "r"); //"r" - read
    if(stream == NULL){
        perror("Nao foi possivel abrir o arquivo");
        exit(1);
    }
    //contador para o while
    int j = 0;
    //linhas a serem lidas  
    char line[1000000];
    No *n0;
    //array do struct 
    //lê as linhas
    while (fgets(line, 1000000, stream)) //feof - lê até o final do arquivo
    {
        float linha = atof(line);
        printf("\n valor: %.2f", linha);
        // if(j == 0){
        //     n0 = no(linha, NULL);
        // }
        // else{
        //     No *n = no(linha, NULL);
        //     lista_inserir_no(n0, n);
        //     free(n);
        // }
        j++;
    }
    // printf("\nLista original\n");
    // lista_imprimir(n0);
    printf(" teste - %.2f", n0->valor);
    fclose(stream);
    
    return 0;
}