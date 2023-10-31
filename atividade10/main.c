#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabela_hash.h"

int main(int argc, char *argv[]){
    //Inicializa a hash table e o tamanho
    init_hash_table();

    /* Alguns valores de inicialização */
    hash_table_put("Brasil", "Brasilia");
    hash_table_put("Chile", "Santiago");
    hash_table_put("Paraguai", "Assuncao");
    hash_table_put("Estados Unidos", "Washington, D.C.");
    hash_table_put("Mali", "Bamaco");
    hash_table_put("Grecia", "Atenas");
    /* Imprime a tabela com index - pais - capital */
    print_table();
    /* faz o get da capital (value) com base no pais (key) */
    printf("\n\n\tCapital Brasil: %s", hash_table_get("Brasil"));
    printf("\n\tCapital Mali: %s", hash_table_get("Mali"));
    printf("\n\tCapital Chile: %s\n", hash_table_get("Chile"));
    /* faz a remoção de um item */
    hash_table_remove("Estados Unidos");
    print_table();
    /* Verifica a existencia de um pais */
    printf("\n\nExiste o pais Grecia na tabela? %d", hash_table_contains("Grecia"));
    printf("\nExiste o pais Estados Unidos na tabela? %d", hash_table_contains("Estados Unidos"));

    return 0;
}