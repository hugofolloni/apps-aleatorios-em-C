// Este programa visa ordenar uma lista de 50 tempos do menos demorado ao mais demorado.

#include<stdio.h>

typedef struct _TEMPO{
    int hora, minuto, segundo;
} TEMPO;

int main(void){
    int i, inputs[50], ordenado[50];

    printf("Irei ordenar a lista de 50 tempos para voce!\n");

    for(i = 0; i < 50; i++){
        TEMPO tempo;
        int secTempo;

        printf("Me diga o tempo %d no formato [hh mm ss]:   ", i+1);
        scanf("%d %d %d", &tempo.hora, &tempo.minuto, &tempo.segundo);

        secTempo = tempo.segundo + 60 * tempo.minuto + 60 * 60 * tempo.hora;

        inputs[i] = secTempo;
    }

    int aux, j;

    for(i = 0; i < 5; i++){
        for(j = i + 1; j < 10; j++){
            if(inputs[i] > inputs[j]){
                aux = inputs[i];
                inputs[i] = inputs[j];
                inputs[j] = aux;
            }
        }
    }

    printf("\n\nEsta lista ordenada ficara:\n");
    
    for(i = 0; i < 50; i++){
        int hora, minuto, segundo, resto;

        hora = inputs[i] / 3600;

        resto = inputs[i] % 3600;

        minuto = resto / 60;

        segundo = resto % 60;
        
        printf("%d:%d:%d\n", hora, minuto, segundo);
    }

    return 0;
}