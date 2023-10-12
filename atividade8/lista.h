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
int lista_verificar_ocorrencias(No *H, char valor_busca); //ok
int lista_verificar_existencia(No *H, char valor_busca); //ok
No *inverter_lista(No *H);
void lista_imprimir_inversa(No *H);
void lista_inserir_no_i(No *H, int i);
void lista_remover_no_i(No **H, int i);
void lista_remover_no(No *H, char valor_busca);
int encontrar_posicao(No *H, char valor_busca, int posicao);