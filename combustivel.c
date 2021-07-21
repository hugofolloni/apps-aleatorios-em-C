#include<stdio.h>

int main(void){
    int speed, runtime, distance;
    float gasto;

    printf("Irei calcular o gasto medio de combustivel da sua viagem. Para isso, preciso de algumas informacoes. \n");
    printf("Quantas horas voce viajou? ");
    scanf("%d", &runtime);
    printf("Quantos km/h voce estava, em media? ");
    scanf("%d", &speed);
    printf("Irei calcular para ti!\n");

    distance = runtime * speed;

    gasto = distance / 12; 

    printf("O seu gasto medio foi de %1.1f litros de gasolina", gasto);

    return 0;
}