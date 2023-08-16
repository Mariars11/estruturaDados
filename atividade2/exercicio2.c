/*
    Exercício 2 - Maior e menor elemento do array. Escreva uma função que 
    recebe um array de números inteiros e retorna o menor e o maior elemento do array.

    Exemplo: menor_maior_array([5, 7, 9,6])
    Saída: 5, 9 
*/

#include <stdio.h>

int MaiorNumero(int length, int* array){
    int maior = 0;
    
    for(int i = 0; i < length; i++){
        if(i == 0){
            maior = array[i];
        }
        else if(array[i] > maior){
            maior = array[i];
        }
    }
    return maior;
}
int MenorNumero(int length, int* array){
    int menor = 0;
    
    for(int i = 0; i < length; i++){
        if(i == 0){
            menor = array[i];
        }
        else if(array[i] < menor){
            menor = array[i];
        }
    }
    return menor;
}

int main(){
    int array[] = {2, 5, 7, 42, 9, 6, 13};
    int length = (sizeof(array) / sizeof(int));
    
    printf("%d, %d", MenorNumero(length, array), MaiorNumero(length, array));
    //esperado 5, 42
    return 0;
}