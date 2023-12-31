typedef struct Pessoa {
    int senha;
    char nome[120];
    struct Pessoa* objetoAnterior;
} Pessoa;

typedef struct Fila{
    Pessoa* inicio;
    Pessoa* final;
    int quantidade;
} Fila;

Fila* fila();
void enfileirar(Pessoa* o, Fila* F);
Pessoa* desenfileirar(Fila* F);