/*
    Exercício 1 - Soma dos elementos de um array. Escreva uma função que recebe um array 
    de números inteiros e retorna a soma de todos os elementos;

    Exemplo: soma_array([5, 7, 9,6])
    Saída: 27 
*/
#include <stdio.h>

int SomarArray(int length, int* array){
    int soma = 0;
    
    for(int i = 0; i < length; i++){
        soma += array[i];
    }

    return soma;
}

int main(){
    int array[] = {5, 7, 9, 6, 13};
    int length = (sizeof(array) / sizeof(int));
    
    printf("%d", SomarArray(length, array));
    
}