#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//definição da struct ponto
typedef struct Ponto{ 
    int x;
    float y;
} Ponto;


int main(int argc, char* argv[]){
    FILE *stream = fopen(argv[1], "r"); //abre o arquivo digitado como argumento
    int j = 0; //contador para o while
    char line[101]; //linhas a serem lidas 
    struct Ponto pontos[100]; //array do struct

    while (fgets(line, 101, stream)) //lê as linhas
    {
        char* linha = _strdup(line); //alocação de memoria
        //pontos x
        char* token_x = strtok(linha, ",");
        pontos[j].x = atoi(token_x);
        //pontos y
        char * token_y = strtok(NULL, "");
        pontos[j].y = atof(token_y);

        j++; //incrementa
        free(linha); //limpa o buffer
    }

    float media_x, media_y, soma_x = 0, soma_y = 0; //definicao de variaveis
    int somatorio = 0; //somatorio da formula
    for(int i = 1; i < j; i++){
        soma_x += pontos[i].x;
        soma_y += pontos[i].y;
        somatorio += i;
    }
    //calculo de medias
    media_x = soma_x / (j -1);
    media_y = soma_y / (j - 1);
    //aplicacao da formula de inclinicação disponibilizada no ava
    float inclinacao = (somatorio * ((pontos[1].x - media_x) * (pontos[1].y - media_y))) / (somatorio * ((pontos[1].x - media_x) * (pontos[1].x - media_x)));
    //aplicacao da formula de intecepcao disponibilizada no ava
    int intercepcao = media_y - (inclinacao * media_x);
    //impressao conforme solicitado
    printf("y = %.1fx + %d", inclinacao, intercepcao);

    return 0;
}
       

