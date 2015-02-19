#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(int argc, char** argv) {
    int vettoreEta[N];
    int maggiorenni = 0;
    int maggioreEta = 18;
    int i;
    
    printf("Inserisci l'eta' di %d persone\n", N);
    
    for(i=0;i<N;i++) {
        printf("Inserisci l'eta' della %da persona: ", i+1);
        scanf("%d", &(vettoreEta[i]));
        if(vettoreEta[i]>=maggioreEta) {
            maggiorenni += 1;
        }
    }
    
    printf("I maggioreni sono: %d", maggiorenni);
    
    return (EXIT_SUCCESS);
}

