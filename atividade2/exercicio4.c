/*
    Exercício 4 - Contar a quantidade de ocorrências de um elemento no array. 
    Escreva uma função que recebe um array de números inteiros e um número 
    inteiro de busca, e retorna a quantidade de vezes que o número de busca aparece no array.

    Exemplo: conta_int_array([5, 7, 9, 6, 7, 11, 6, 5], 7)
    Saída: 2
*/

#include <stdio.h>

int ContadorNumero(int length, int* array, int busca){
    int contador = 0;
    
    for(int i = 0; i < length; i++){
        if(array[i] == busca){
            contador++;
        }
    }
    return contador;
}

int main(){
    int array[] = {1,1,1,3,3,3,3,9,9,9,9,9}; // 1 (3), 3 (4), 9 (4)
    int length = (sizeof(array) / sizeof(int));
    
    printf("%d", ContadorNumero(length, array, 9));
    //esperado 5
}