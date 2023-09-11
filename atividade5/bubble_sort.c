#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble_sort.h"

//empurra o maior numero para o final do array
int bubble_sort(char *array[], int length)
{
    int temp = 0;

    for(int i = 0; i < length - 1; i++)
    {
        for(int j = 0; j < length-1-i; j++){
            if(strcmp(array[j], array[j+1]) > 0)
            {
                char *temp = "";
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    return 0;
}