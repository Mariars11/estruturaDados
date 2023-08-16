/*
    Exercício 3 - Verificar se um elemento existe no array Escreva uma função 
    que recebe um array de strings e uma string de busca, e retorna "1" se a 
    string de busca existe no array, ou "0" caso não exista.

    Exemplo: busca_string(["texto", "J", "EDA"], "EDO")
    Saída: 0 
*/

#include <stdio.h>
#include <string.h>

int BuscaString(int length, char *array, char *busca){
    int booleano = 0;
    for(int i = 0; i < length; i++){
        if(busca == array){
            booleano = 1;
        }
    }

    return booleano;
}

int main(){
    char *array[] = {"Maria", "Maria Clara", "Joao", "Joao Pedro", "Teste"};
    int length = (sizeof(array) / sizeof(char*)); //tamanho do array
    
    int resultadoFinal = 0;
    int resultadoBool = 0;

    for(int i = 0; i < length; i++){
        resultadoBool = BuscaString(length, array[i], "Maria Clara"); 

        if(resultadoBool == 1){
            resultadoFinal = resultadoBool;
        }
        
    }

    printf("%d", resultadoFinal);
    //esprado 1
    return 0;
}