#include <stdio.h>
#include <stdlib.h>
#include "pilhaEstatica.h"


int pilhaCheia(PILHA p)
{
    return (p.topo == MAX);
}

int pilhaVazia(PILHA p)
{
    return (p.topo == BASE);
}

void inicializaPilha(PILHA *p)
{
    p->topo = -1;
}

void empilha(PILHA *p, int n)
{
    if (pilhaCheia(*p))
        return;
    else
    {
        p->topo = p->topo + 1;
        //printf("\n%d -> p.topo função\n", p->topo);
        p->pilha[p->topo] = n;
        return;
    }
}

int desempilha(PILHA *p, int *n)
{
    if (pilhaVazia(*p))
        return 0;
    else
    {
        *n = p->pilha[p->topo];
        p->topo--;
        return 0;
    }
}

int elementoDoTopo(PILHA p)
{
    return(p.pilha[p.topo]);
}
