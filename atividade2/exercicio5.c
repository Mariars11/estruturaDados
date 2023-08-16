/*
    Exercício 5 - Multiplicar elementos de dois arrays. Escreva uma 
    função que recebe dois arrays de números inteiros com o mesmo 
    tamanho e retorna um novo array com os elementos resultantes da 
    multiplicação dos elementos dos dois arrays.

    Exemplo: multiplica_array([5, 7, 9, 6], [5, 7, 9,6])
    Saída: [25, 49, 81, 36] 
*/
#include <stdio.h>

int MultiplicarArrays(int array1, int array2){
    
    int arrayResultante = 0;
    
    arrayResultante = array1 * array2;
    
    return arrayResultante;
}

int main(){
    int array1[] = {5, 6, 2, 3}; 
    int array2[] = {5, 7, 6, 6}; 
    //Resultado esperado [25, 42, 12, 18]
    int lengthArray1 = (sizeof(array1) / sizeof(int));
    int lengthArray2 = (sizeof(array2) / sizeof(int));

    
    if(lengthArray1 == lengthArray2){
        int arrayResultante[lengthArray1];
        for(int i = 0; i < lengthArray1; i++){
            arrayResultante[i] = MultiplicarArrays(array1[i], array2[i]);
        }
        for(int i = 0; i < lengthArray1; i++){
            if(i == 0){
                printf("[%d,", arrayResultante[i]);
            }
            else if(i == lengthArray1 - 1){
                printf("%d]", arrayResultante[i]);
            }
            else{
                printf("%d,", arrayResultante[i]);
            }
        }
    }
    else{
        printf("O tamanho dos arrays nao eh igual!");
    }

    return 0;
}