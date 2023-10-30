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
    print_table();
    return 0;
}