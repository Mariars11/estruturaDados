#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"

void imprimirArray(int array[], int length){
    for(int i = 0; i < length; i++){
        printf("%d ", array[i]);
    }
}

int main(int argc, char* argv[]){
    //bubbleSort - complexidade quadrática (n²)
    int array[argc-1]; //array de ints
    //converte de char para int
    for(int i = 0; i < argc; i++){
        if(i != 0){ //não pegar o argumento "main.exe"
            array[i-1] = atoi(argv[i]); //pula o argumento 0, então volto uma posição para salvar 
        }
    }
    int length = (sizeof(array) / sizeof(int));
    
    bubble_sort(array, length);
    imprimirArray(array, length);
    return 0;
}