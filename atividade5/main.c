#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble_sort.h"

void imprimirArray(char *array[], int length){
    for(int i = 0; i < length; i++){
        printf("%s ", array[i]);
    }
}

int main(int argc, char* argv[]){
    //abrir o arquivo
    FILE *stream = fopen(argv[1], "r"); 
    
    if(stream == NULL){
        perror("Não foi possivel abrir o arquivo");
        exit(1);
    }
    //contador para o while
    int qt_linhas = 0;
    //linhas a serem lidas  
    char line[101];
    
    // //lê as linhas
    while (fgets(line, 101, stream)) 
    {
        //incrementa
        qt_linhas++;
    }
    char *array[qt_linhas];
    int j = 0;
    
    fclose(stream);
    stream = fopen(argv[1], "r"); 
    
    if(stream == NULL){
        perror("Não foi possivel abrir o arquivo");
        exit(1);
    }
    while (fgets(line, 101, stream)) 
    {
        char* linha = _strdup(line);
        array[j] = _strdup(linha);
        j++;
    }

    int length = sizeof(array) / sizeof(char*);
    imprimirArray(array, length);
    bubble_sort(array, length);
    printf("\n");
    imprimirArray(array, length);

    
    return 0;
}