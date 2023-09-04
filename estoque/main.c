#include <stdio.h>
#include <stdlib.h>
#include "estoque.h"

int main(int argc, char* argv[]){
    
    int option = 0, length = 0;
    Produto produtos[100];

    while(option != 5){
        printf("\n1 - Adicionar Produto\n");
        printf("2 - Listar Produtos\n");
        printf("3 - Editar Produto\n");
        printf("4 - Remover Produto\n");
        printf("5 - Encerrar Sistema\n");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &option);

        switch(option){
            case 1:{
                AdicionarProduto(produtos, length);
                length++;
                break;
            }
            case 2:{
                ListarProdutos(produtos, length);
                break;
            }
            case 3:{
                EditarProdutos(produtos, length);
                break;
            }
            case 4:{
                DeletarProduto();
                break;
            }
            case 5:{
                system("cls");
                printf("\nEncerrando o Sistema...");
                break;
            }

            default:{
                printf("\nOpção inválida...");
                break;
            }
        }
    }
    return 0;
}