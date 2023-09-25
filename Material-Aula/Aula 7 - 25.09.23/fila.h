typedef struct Objeto {
    char valor;
    struct Objeto* objetoAnterior;
} Objeto;

typedef struct Fila{
    Objeto* inicio;
    Objeto* final;
    int quantidade;
} Fila;

Fila* fila();
void enfileirar(Objeto* o, Fila* F);
Objeto* desenfileirar(Fila* F);