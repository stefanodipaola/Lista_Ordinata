  #ifndef LISTA_H
#define LISTA_H

#include "nodo.h"

struct lista {
    Nodo *head;
    int counter;
};
typedef struct lista Lista;

void init(Lista *a);
void stampa(Lista *a);
void inserisci(Lista *a, int val);
void rimuovi(Lista *a, int val);
void clear(Lista *a);

#endif
