typedef struct No
{
    char valor;
    struct No *proximo_no;
    
} No;

No *no(char valor, No *proximo_no);
void lista_inserir_no(No *H, No *no);
void lista_imprimir(No *H);
int lista_quantidade_nos(No *H);
No *copiar_lista(No *C);
void concatenar_lista(No *H, No * Hc);
void liberar_lista(No* H);