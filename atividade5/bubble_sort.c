#include <stdio.h>
#include <stdlib.h>
#include "bubble_sort.h"
#include <string.h>
//Inverte as posições
void trocarPosicao(char *array[], int i, int j){
    char *temp = "";
    temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}
//empurra o maior numero para o final do array
int bubble_sort(char *array[], int length)
{
    for(int i = 0; i < length - 1; i++)
    {
        for(int j = 0; j < length-1-i; j++){
            if(strcmp(array[j], array[j+1]) > 0) //compara se a string anterior é "maior" alfabeticamente
            {
                trocarPosicao(array, j, j+1);
            }
        }
    }

    return 0;
}