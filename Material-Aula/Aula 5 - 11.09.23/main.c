#include <stdio.h>
#include <stdlib.h>
#include "bubbleSort.h"
void imprimirArray(int array[], int length){
    for(int i = 0; i < length; i++){
        printf("%d ", array[i]);
    }
}

int main(int argc, char* argv[]){
    //bubbleSort - complexidade quadrática (n²)
    int array[] = {54,26,93,17,77,31,44,55,20};
    int length = (sizeof(array) / sizeof(int));
    
    imprimirArray(array, length);
    bubble_sort(array, length);
    printf("\n");
    imprimirArray(array, length);
    return 0;
}
