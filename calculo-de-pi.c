// Este projeto visa achar o valor aproximado de pi 

#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main (void){
    float i=0, x=0, y=0, dAo00=0, conta=0, dentro = 0, max;

    srand(time(NULL));
    max = RAND_MAX; 

    for (i = 0; i < 1000000; i++){
        x = rand();
        y = rand();
        x = x / max; // Divide o número gerado pelo máximo para poder deixar x e y no intervalo [0, 1]
        y = y / max;
        dAo00 = ((x * x) + (y * y)); /* A fórmula correta incluiria o raiz de p, porém, como (x > 1) -> (x² > 1), (x=1) -> (x² = 1) e (x < 1) -> (x² < 1), podemos deixar assim pois os valores booleanos (x<=1) continuarão corretos */ 
        if(dAo00 <= 1){
            dentro++; // Se o ponto estiver a ate 1 de distância do centro, então teremos uma adição ao valor dentro.
        }
    }

    conta = 4 * dentro / 1000000;

    printf("X = %.5f   para 1.000.000 pontos\n", conta);

    i=0; x=0; y=0; dAo00=0; conta=0; dentro = 0;

    for (i = 0; i < 9999999; i++){
        x = rand();
        y = rand();
        x = x / max;
        y = y / max;
        dAo00 = ((x * x) + (y * y));
        if(dAo00 <= 1){
            dentro++;
        }
    }

    conta = 4 * dentro / 9999999;

    printf("X = %.5f   para 9.999.999 pontos", conta);


    return 0;

}
