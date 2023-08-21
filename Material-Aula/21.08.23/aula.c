#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//estrutura heterogenea
typedef struct Ponto{ //o tipo
    int x;
    float y;
    char* label;
} Ponto; //nome do tipo

int main(int argc, char* argv[]){
    Ponto p;
    
    p.x = 1;
    p.y = 1.8;
    p.label = malloc(sizeof(char) * 5); //questao do espaco
    strcpy(p.label, "Ponto 1"); //copia uma string na variavel

    printf("(%d, %.2f) - %s", p.x, p.y, p.label); //p.label++ - o endereço incrementa um; ++p.label - pula uma posicao do caracter e incrementa um no endereço
    printf("\n%p", p.label); //imprime o endereço na memoria
    return 0;
}