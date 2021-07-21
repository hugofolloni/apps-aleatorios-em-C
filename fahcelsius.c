#include<stdio.h>

int main(void){
    float celsius, fahreinheit;

    printf("Me diga sua temperatura em graus Celsius que a converterei para Fahreinheit.");
    scanf("%f", &celsius);

    fahreinheit = (9 * celsius + 160) / 5;

    printf("A temperatura em %1.1f graus Celsius convertida sera de %1.1f graus Fahreinheit.", celsius, fahreinheit);
    return 0;
}