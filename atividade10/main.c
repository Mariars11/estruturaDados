//put
//get
//remove
//hash function

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabela_hash.h"
#define MAX_CHARS 256
#define TABLE_SIZE 10


int main(int argc, char *argv[]){
    init_hash_table();
    hash_table_put("Brasil", "Brasilia");
    hash_table_put("Chile", "Santiago");
    hash_table_put("Paraguai", "Assuncao");
    hash_table_put("Estados Unidos", "Washington, D.C.");
    hash_table_put("Mali", "Bamaco");
    hash_table_put("Grecia", "Atenas");

    print_table();
    printf("\nCapital Brasil: %s", hash_table_get("Brasil"));
    printf("\nCapital Mali: %s", hash_table_get("Mali"));

    return 0;
}