#include <stdio.h>
#include <stdlib.h>
#include "estoque.h"

void AdicionarProduto(Produto *produtos, int length){
    Produto p;
    printf("\n");
    printf("Digite o nome do Produto: ");
    scanf("%s", &p.nome);
    printf("Digite o ID do Produto: ");
    scanf("%d", &p.id);
    printf("Digite a quantidade do Produto: ");
    scanf("%d", &p.quantidade);

    produtos[length] = p;
}
void ListarProdutos(Produto *produtos, int length){
    printf("\n");
    for(int j = 0; j < length; j++){
        printf("%d - %s - %d\n", produtos[j].id, produtos[j].nome, produtos[j].quantidade);
    }
}
void EditarProdutos(Produto *produtos, int length){
    int id;
    int hasProduto = 0;
    printf("\nInforme o ID do Produto: ");
    scanf("%d", &id);

    for(int j = 0; j < length; j++){
        if(produtos[j].id == id){
            printf("\nInforme a nova quantidade: ");
            scanf("%d", &produtos[j].quantidade);
            hasProduto = 1;
        }
    }
    if(hasProduto == 0){
        printf("\nProduto nao existe!\n");
    }
}
void DeletarProduto(){
    printf("Deletando Produto");
}

