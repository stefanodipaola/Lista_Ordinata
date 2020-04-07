# include  <stdio.h>
# include  <stdlib.h>
# include  "lista.h"
# include  "nodo.h"

void init(Lista * a){
    a-> head = NULL ;
    a-> counter = 0 ;
}

void stampa(Lista * a){
    Nodo * n = a-> head ;

    printf("[% d]", a-> counter);

    while(n != NULL ) {
        printf ("% d", n-> val);
        n = n-> next;
    }
    printf ("NULL \n");
}

void inserisci(Lista * a, int val){
	
	Nodo * n=a-> head ;
    Nodo * p = NULL ;

    Nodo * t = malloc ( sizeof (Nodo));
    t-> val = val;
    t-> next = NULL ;

    while (n != NULL && n-> val <val) {
        p = n;
        n = n-> next;
    }

    if (p == NULL ) {
        t-> next = a-> head ;
        a-> head = t;
    }else{
        p-> next = t;
        t-> next = n;
    }

    a-> counter ++;
}

void rimuovi(Lista * a, int val){
    Nodo * n = a-> head ;
    Nodo * p = NULL ;
    Nodo * t = NULL ;

    while (n != NULL && n-> val <val) {
        p = n;
        n = n-> next ;
    }

    if (n == NULL ) {
        printf ("Elemento % d non trovato \n", val);
        return ;
    }

    printf ("Elemento % d trovato \n", val);
    a-> counter --;

    if (p == NULL ) {
        printf ("L'elemento da eliminare e' in testa \n");
        
        t = a-> head ;           
        a-> head = a-> head -> next ;  
        free(t);               
        return ;
    }

    printf ("L'elemento da eliminare non e' in testa \n");
    t = p-> next ;
    p-> next = t-> next ;
    free(t);
}

void clear(Lista * a){
    Nodo * t;
    Nodo * n = a-> head ;

    while (n != NULL ) {
        t = n;    
        n = n-> next ;
        
        printf ("Pulisci il nodo con valore %d \n", t-> val );
        free(t);
    }

    a-> head = NULL ;
    a-> counter = 0 ;
}
