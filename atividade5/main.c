#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble_sort.h"

int main(int argc, char* argv[]){
    //abrir o arquivo
    FILE *stream = fopen(argv[1], "r"); 
    //Tratativa caso o arquivo dê erro
    if(stream == NULL){
        perror("Não foi possivel abrir o arquivo");
        exit(1);
    }
    //quantidade de linhas para criação do array
    int qt_linhas = 0;
    //linhas a serem lidas  
    char line[101];
    //contagem das linhas
    while (fgets(line, 101, stream)) 
    {
        qt_linhas++;
    }
    //criação do array de palavras
    char *array[qt_linhas];
    int j = 0;
    //fechar o arquivo para poder lê-lo de novo
    fclose(stream);
    stream = fopen(argv[1], "r"); 
    
    if(stream == NULL){
        perror("Não foi possivel abrir o arquivo");
        exit(1);
    }
    //aloca no array as palavras
    while (fgets(line, 101, stream)) 
    {
        array[j] = _strdup(line); //faz o malloc e o strcpy
        j++;
    }
    fclose(stream);

    int length = sizeof(array) / sizeof(char*);
    bubble_sort(array, length);
    
    FILE *streamSaida = fopen("arq_palavras_ordenado.txt", "w");

    if(streamSaida == NULL){
        perror("Não foi possivel abrir o arquivo");
        exit(1);
    }

    for(int i = 0; i < length; i++){
        fprintf(streamSaida, "%s\n", array[i]);
    }

    fclose(streamSaida);
    
    return 0;
}