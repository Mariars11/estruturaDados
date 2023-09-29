#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include "pilha.h"
#include "fila.h"

int main(int argc, char *argv[])
{
    printf("\t\tSISTEMA DE FILAS - FILA BANCO\n");
    int opcao, senha = 0;

    Fila* F = fila();
    Pessoa pessoas[100];
    Pessoa *p;

    printf("\n\t1 - Retire um senha");
    printf("\n\t2 - Atenda um cliente");
    printf("\n\t5 - Va para sistema de pilha");


    do{
        printf("\n\n\t-> Escolha: ");
        scanf("%d", &opcao);
        
        fflush(stdin);
        switch (opcao)
        {
            case 1:{
                printf("\n\t-> Informe o nome: ");
                fgets(pessoas[senha].nome, 120, stdin);
                pessoas[senha].senha = senha;

                enfileirar(&pessoas[senha], F);
                break;
            }
            case 2:{
                do{
                    p = desenfileirar(F);
                }while(p != NULL);
                break;
            }
            case 5:{
                system("cls");
                break;
            }
            
            default:
                break;
        }
        senha++;
    }while(opcao != 5);

    int count = 0;
    opcao = 0;
    
    Pilha* P = pilha();
    Objeto objs[100];
    Objeto  *o;
    
    printf("\t\tSISTEMA DE PILHAS - Baralho de Cartas\n");
    
    printf("\n\t1 - Adicione uma carta");
    printf("\n\t2 - Retire uma carta");
    printf("\n\t5 - Sair do sistema");


    do{
        printf("\n\n\t-> Escolha: ");
        scanf("%d", &opcao);
        
        fflush(stdin);
        switch (opcao)
        {
            case 1:{
                printf("\n\t-> Informe a carta: ");
                scanf("%c", &objs[count].valor);

                empilhar(&objs[count], P);
                break;
            }
            case 2:{
                do{
                    o = desempilhar(P);
                }while(o != NULL);
                break;
            }
            case 5:{
                system("cls");
                break;
            }
            
            default:
                break;
        }
        count++;
    }while(opcao != 5);
    
    exit(0);
}