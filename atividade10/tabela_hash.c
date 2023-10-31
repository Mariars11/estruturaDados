#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabela_hash.h"

#define MAX_CHARS 256
#define TABLE_SIZE 10
//usado no put, get e verificação de existencia
Item *hash_table[TABLE_SIZE];
//define o index do item com base na palavra
int hash(char *pais)
{
    int length = strnlen(pais, MAX_CHARS);
    int hash_value = 0;

    for(int i = 0; i < length; i++)
    {
        hash_value += pais[i];
        hash_value = (hash_value * pais[i]) % TABLE_SIZE;
    }
    
    return hash_value;
}
//inicialização da tabela com base na variavel Table_Size
void init_hash_table()
{
    for(int i = 0; i < TABLE_SIZE; i++)
    {
        hash_table[i] = NULL;
    }
}
//Impressão da tabela
void print_table()
{
    printf("\n\tIndex\tPais\tCapital\n");
    for(int i = 0; i < TABLE_SIZE; i++)
    {
        if(hash_table[i] == NULL)
        {
            printf("\n\t%d\t---", i);
        }
        else
        {
            printf("\n\t%d\t%s\t%s", hash_table[i]->index, hash_table[i]->pais, hash_table[i]->capital);
        }
    }
}
//Inserção do item na tabela
void hash_table_put(char* chave, char* dado)
{
    //Caso não seja nulo, busca até achar um index que não esteja ocupado 
    if(chave != "")
    {
        int index = hash(chave);
        //Caso o index já esteja em uso, incrementa até achar um que não esteja
        while(hash_table[index] != NULL)
        {
            index++;
        }
        //validação para prevenção de erro
        if(hash_table[index] != NULL)
        {
            printf("\nValor (%d) indisponivel!", index);
        }
        //insere o item
        else
        {
            struct Item *item = (struct Item*) malloc(sizeof(struct Item));
            item->pais = _strdup(chave);
            item->capital = _strdup(dado);
            item->index = index;
            hash_table[index] = item;
        }  
    }
}
char* hash_table_get(char* chave)
{
   //pega o valor do index
   int hashIndex = hash(chave);  
	
   //encontra o valor da capital, quando o valor do pais é igual ao valor buscado
   while(hash_table[hashIndex] != NULL) 
   {
      if(strcmp(hash_table[hashIndex]->pais, chave) == 0)
         return hash_table[hashIndex]->capital; 
			
      //go to next cell
      ++hashIndex;	
   }        
	
   return NULL;        
}

void hash_table_remove(char* chave)
{
    //pega o index
    int hashIndex = hash(chave);
    //caso o valor da chave seja igual ao pais, faz a exclusão
    while(hash_table[hashIndex] != NULL)
    {
        if(strcmp(hash_table[hashIndex]->pais, chave) == 0)
        {
            Item* temp = hash_table[hashIndex]; 
                
            hash_table[hashIndex] = NULL; 
        }    
        ++hashIndex;
    }      
}
int hash_table_contains(char* chave)
{
    int hashIndex = hash(chave);
    //Se existir a chave, retorna 1 (true)
    while(hash_table[hashIndex] != NULL)
    {
        if(strcmp(hash_table[hashIndex]->pais, chave) == 0)
        {
            return 1;
        }
		
        ++hashIndex;
    } 

    return 0;
}