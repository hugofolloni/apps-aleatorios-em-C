// Este projeto visa calcular o máximo de memória que é possível alocar.

#include<stdlib.h>
#include<stdio.h>

int main (void) {
    int n, *allocated, trying;
    
    for(n=0; n < 1000000; n++){
        trying = n * 100000;
        allocated = (int*) malloc (trying * sizeof (int));
        printf("Foi alocado um espaco de memoria para tamanho %d\n", trying);
        free(allocated);
        if(!allocated){
            puts ("Sem memoria.");
            return 1;
        }
    }
    
    return 0;
}