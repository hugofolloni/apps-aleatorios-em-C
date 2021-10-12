// Este projeto visa analisar a relação posicional de duas circunferências

#include<stdio.h>
#include<math.h>

typedef struct _PONTO {
    float x, y;
} PONTO;

typedef struct _CIRCUNFERENCIA{
    float raio;
    PONTO centro;
} CIRCUNFERENCIA;

int main(void){
    int i;
    CIRCUNFERENCIA c1, c2;

    printf("Vamos analisar a relacao entre duas circunferencias\n");

    printf("Me fale o raio e as coordenadas do centro da circunferencia c1: [raio x y]:\n");
    scanf("%f %f %f", &c1.raio, &c1.centro.x, &c1.centro.y);

    printf("Agora me fale os dados da circunferencia c2: [raio x y]\n");
    scanf("%f %f %f", &c1.raio, &c1.centro.x, &c1.centro.y);

    int dx, dy, dcentros, raiosSoma, raiosSubs;

    dx = c1.centro.x - c2.centro.x;
    dy = c1.centro.y - c2.centro.y;

    dcentros = sqrt(dx*dx + dy*dy);
    raiosSoma = c1.raio + c2.raio;
    raiosSubs = c1.raio - c2.raio;

    if(raiosSubs < 0){
        int aux = raiosSubs;
        raiosSubs = aux * -1;
    }

    if(dcentros == raiosSoma){
        printf("As circunferencias sao tangentes externas.");
    }
    else if(dcentros > raiosSoma){
        printf("As circunferencias sao externas uma a outra.");
    }
    else if(dcentros < raiosSoma){
        printf("As circunferencias sao secantes.");
    }
    else if(dcentros < raiosSubs){
        printf("As circunferencias sao internas uma a outra.");
    }

    return 0;
}   

