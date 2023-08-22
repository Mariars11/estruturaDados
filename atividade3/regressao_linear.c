#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//definição da struct ponto
typedef struct Ponto{ 
    int x;
    float y;
} Ponto;


int main(int argc, char* argv[]){
    //abre o arquivo passado como argumento
    FILE *stream = fopen(argv[1], "r"); 
    //contador para o while
    int j = 0;
    //linhas a serem lidas  
    char line[101];
    //array do struct 
    struct Ponto pontos[100]; 
    //lê as linhas
    while (fgets(line, 101, stream)) 
    {
        //alocação de memoria com malloc e copia na string linha
        char* linha = _strdup(line); 
        //pontos x
        char* token_x = strtok(linha, ",");
        pontos[j].x = atoi(token_x);
        //pontos y
        char * token_y = strtok(NULL, "");
        pontos[j].y = atof(token_y);
        //incrementa
        j++;
        //limpa o espaço de memoria
        free(linha); 
    }
    //definicao de variaveis
    float media_x, media_y, soma_x = 0, soma_y = 0;
    //somatorio da formula 
    int somatorio = 0;
    //for para somas 
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
       

