typedef struct Objeto
{
    char valor;
    struct Objeto *proximo_objeto;
} Objeto;



typedef struct Pilha
{
    Objeto *obj_topo;
    int quantidade;
} Pilha; //apontar para o primeiro elemento da lista, quantidade de objetos na pilha

Pilha* pilha();

void empilhar(Objeto *o, Pilha *p);
Objeto* desempilhar(Pilha *p);

