#define MAX_CHARS 256
#define TABLE_SIZE 10

typedef struct Item {
   char pais[MAX_CHARS];   
   char capital[MAX_CHARS];
} Item;

char* hash_table_get(char* chave);
void hash_table_put(char* chave, char* dado);
int hash_table_contains(char* chave);
void hash_table_remove(char* chave);
int hash(char *pais);
void print_table();
void init_hash_table();
