#include <stdio.h>
#include "lista.h"

int main(){
    Lista a;

    init(&a);
    
    stampa(&a);

    inserisci(&a, 3);
    stampa(&a);

    inserisci(&a, 10);
    stampa(&a);

    inserisci(&a, 2);
    stampa(&a);

    inserisci(&a, 8);
    stampa(&a);

    inserisci(&a, 5);
    stampa(&a);

    rimuovi(&a, 9);
    stampa(&a);

    rimuovi(&a, 15);
    stampa(&a);

    rimuovi(&a, 50);

    rimuovi(&a, 40);
    stampa(&a);

    clear(&a);
    
    return 0;
}
