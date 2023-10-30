#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabela_hash.h"

#define MAX_CHARS 256
#define TABLE_SIZE 10
Item *hash_table[TABLE_SIZE];

int hash(char *pais){
    int length = strnlen(pais, MAX_CHARS);
    int hash_value = 0;

    for(int i = 0; i < length; i++){
        hash_value += pais[i];
        hash_value = (hash_value * pais[i]) % TABLE_SIZE;

    }

    return hash_value;
}
void init_hash_table(){
    for(int i = 0; i < TABLE_SIZE; i++){
        hash_table[i] = NULL;
    }
}
void print_table(){
    for(int i = 0; i < TABLE_SIZE; i++){
        if(hash_table[i] == NULL){
            printf("\t%d\t---", i);
        }
        else{
            printf("\t%d\t%s", i, hash_table[i]->capital);
        }
    }
}
void hash_table_put(char* chave, char* dado){
    printf("\n%s", chave);
    printf("\n%s", dado);

    if(chave != ""){
        int index = hash(chave);
        printf("\n%d", index);
        if(hash_table[index] != NULL){
            printf("Valor indisponivel");
        }
        else{
            printf("\nentrei");
            struct Item *item = (struct Item*) malloc(sizeof(struct Item));
            strcpy(chave, item->pais);
            strcpy(dado, item->capital);

            hash_table[index] = item;
        }  
    }
}