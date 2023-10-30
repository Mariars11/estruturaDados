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
            printf("\n\t%d\t---", i);
        }
        else{
            printf("\n\t%d\t%s\t%s", hash_table[i]->index, hash_table[i]->pais, hash_table[i]->capital);
        }
    }
}
void hash_table_put(char* chave, char* dado){
    if(chave != ""){
        int index = hash(chave);
        while(hash_table[index] != NULL){
            index++;
        }
        if(hash_table[index] != NULL){
            printf("\nValor (%d) indisponivel!", index);
        }
        else{
            struct Item *item = (struct Item*) malloc(sizeof(struct Item));
            item->pais = _strdup(chave);
            item->capital = _strdup(dado);
            item->index = index;
            hash_table[index] = item;
        }  
    }
}
char* hash_table_get(char* chave){
   //get the hash 
   int hashIndex = hash(chave);  
	
   //move in array until an empty 
   while(hash_table[hashIndex] != NULL) {
	
      if(strcmp(hash_table[hashIndex]->pais, chave) == 0)
         return hash_table[hashIndex]->capital; 
			
      //go to next cell
      ++hashIndex;
		
   }        
	
   return NULL;        
}