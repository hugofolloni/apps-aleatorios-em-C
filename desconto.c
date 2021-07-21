#include<stdio.h>

int main(void){
    float price, nineOff;

    printf("Me diga o preco de um produto que calcularei o desconto de 9%% sobre ele. ");
    scanf("%f", &price);

    nineOff = price - (price * 9 / 100);

    printf("Com 9%% de desconto, o produto que custava %1.2f reais custara agora %1.2f reais", price, nineOff);

    return 0;
}