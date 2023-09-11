#include <stdio.h>
#include <stdlib.h>
#include "bubbleSort.h"

void trocarPosicao(int *n1, int *n2){
    int temp = 0;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
//empurra o maior numero para o final do array
int bubble_sort(int array[], int length)
{
    int temp = 0;

    for(int i = 0; i < length - 1; i++)
    {
        for(int j = 0; j < length-1-i; j++){
            if(array[j] > array[j+1])
            {
                trocarPosicao(&array[j], &array[j+1]);
            }
        }
    }
}