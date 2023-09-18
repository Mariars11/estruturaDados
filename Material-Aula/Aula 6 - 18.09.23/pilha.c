#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* pilha(){
    Pilha p;
    p.obj_topo = NULL;
    p.quantidade = 0;
    Pilha *p1 = &p;
    
    return p1;
}
void empilhar(Objeto *o, Pilha *p)
{
    o->proximo_objeto = p->obj_topo;
    p->obj_topo = o;
    p->quantidade++;
}
Objeto* desempilhar(Pilha *p)
{
    Objeto* o = p->obj_topo;
    p->obj_topo = o->proximo_objeto;
    p->quantidade--;

    return o;
}
