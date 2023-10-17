typedef struct No
{
    float valor;
    struct No *proximo_no;
    
} No;

No *no(float valor, No *proximo_no);
void lista_inserir_no(No** L, float valor);
void lista_imprimir(No* L);
void lista_inserir_no_ordenado(No** L, float valor);