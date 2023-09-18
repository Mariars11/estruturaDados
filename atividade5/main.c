#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"
#include <string.h>

int main(int argc, char *argv[]){
    //Abrir o arquivo "arq_palavras.txt"
    FILE *stream = fopen(argv[1], "r");
    //Tratativa de erro
    if(stream == NULL){
        perror("Nao foi possivel abrir o arquivo");
        exit(1);
    }
    //Para contar as linhas que tem no arquivo
    int qtd_linhas = 0;
    char line[20];

    while (fgets(line, 20, stream)  != NULL) 
    {
        qtd_linhas++;
    }
    //Fecha para reabrir
    fclose(stream);
    //Definição de array de strings
    char *array_string[qtd_linhas];
    //Reabrir o arquivo para leitura das linhas
    stream = fopen(argv[1], "r");

    int j = 0; //count
    
    while (fgets(line, 20, stream)  != NULL) 
    {
        char *linha = _strdup(line); //Aloca com o malloc e copia com o strcpy
        array_string[j] = linha; 
        j++;

    }
    int length = sizeof(array_string) / sizeof(char*); //quantidade de elementos no array

    bubble_sort(array_string, length); //faz o bubbleSort
    
    //Saída num novo arquivo
    FILE *streamSaida = fopen("arq_palavras_ordenado.txt", "w");

    if(streamSaida == NULL){
        perror("Não foi possivel abrir o arquivo");
    }
    //Imprime no arquivo
    for(int i = 0; i < length; i++){
        if(i != length - 1){
            fprintf(streamSaida, "%s\n", array_string[i]);
        }
        else{
            fprintf(streamSaida, "%s", array_string[i]);
        }
    }

    fclose(streamSaida); //fecha o arquivo
    
    return 0;
}