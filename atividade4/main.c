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
    int array[argc];
    
    for(int i = 1; i < argc; i++){
        array[i] = atoi(argv[i]);
    }
    int length = (sizeof(array) / sizeof(int));
    bubble_sort(array, length);
    imprimirArray(array, length-1);
    return 0;
}