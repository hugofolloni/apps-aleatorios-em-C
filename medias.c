#include<stdio.h>

int main(void){
    float a, b, c, d, e, f, media1, media2, mediamedia, x, y, z, mxyz;

    a = 8;
    b = 7;
    c = 9;

    d = 4;
    e = 5; 
    f = 6;

    media1 = (a + b + c) / 3;
    media2 = (d + e + f) / 3;
    mediamedia = (media1 + media2) / 2;

    printf("Hoje, descobriremos a media dos numeros 8, 9 e 7.\n");
    printf("A media de 8, 9 e 7 e %1.2f\n", media1);
    printf("Agora saberemos a media de 4, 5 e 6.\n");
    printf("A media de 3, 4 e 5 e: %1.2f\n", media2);
    printf("E qual sera a media dessas duas medias? Deixe-me ver\n");
    printf("Calculei aqui e vi que e %1.2f\n", mediamedia);

    printf("Agora que voce ja viu minhas capacidades, me diga tres numeros para eu calcular.\n");
    printf("Vamos la, me diga o primeiro: ");
    scanf("%f", &x);
    printf("Me diga o segundo: ");
    scanf("%f", &y);
    printf("Me diga o terceiro: ");
    scanf("%f", &z);    
    printf("Deixe-me calcular para ti!\n");

    mxyz = (x + y + z) / 3;

    printf("Depois de dificeis calculos, percebi que a media de %1.1f, %1.1f e %1.1f e: \n%1.2f", x, y, z, mxyz);



    return 0;
}
