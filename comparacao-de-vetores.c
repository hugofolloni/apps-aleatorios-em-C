// Este programa visa analisar dois vetores e fazer algumas comparacoes entre eles.

#include<stdio.h>

int main(){
    int vetor[10], i = 0, menuEscolha;
     
    printf("-----------\n  VETORES\n-----------\n");

    printf("Usuario, por favor me diga 10 numeros inteiros (separados por espacos):\n ");
    scanf("%d %d %d %d %d %d %d %d %d %d", &vetor[0], &vetor[1], &vetor[2], &vetor[3], &vetor[4], &vetor[5], &vetor[6], &vetor[7], &vetor[8], &vetor[9]);

    printf("MENU\n1.Maior valor\n2.Menor valor\n3.Quantos sao pares\n4.Soma dos valores\n5.Se esta no vetor\nO que deseja saber?\n");
    scanf(" %d", &menuEscolha);

    if(menuEscolha == 1){
        int maior;
        maior = vetor[1];
        for(i = 0; i < 10; i++){
            if(maior < vetor[i]){
                maior = vetor[i];
            }
        }
        printf("Resposta = ");
        printf("%d", maior);
    }

    if(menuEscolha == 2){
        int menor;
        menor = vetor[1];
        for(i = 0; i < 10; i++){
            if(menor > vetor[i]){
                menor = vetor[i];
            }
        }
        printf("Resposta = ");
        printf("%d", menor);
    }

    if(menuEscolha == 3){
        int pares = 0;
        for(i = 0; i < 10; i++){
            if(vetor[i] % 2 == 0){
                pares++;
            }
        }
        printf("Resposta = ");
        printf("%d", pares);
    }

    if(menuEscolha == 4){
        int soma = 0;
        for(i = 0; i < 10; i++){
            soma += vetor[i];
        }
        printf("Resposta = ");
        printf("%d", soma);
    }

    if(menuEscolha == 5){
        int valorPerguntado;
        printf("Qual valor deseja saber? ");
        scanf(" %d", &valorPerguntado);

        if(vetor[0] == valorPerguntado || vetor[1] == valorPerguntado || vetor[2] == valorPerguntado || vetor[3] == valorPerguntado || vetor[4] == valorPerguntado || vetor[5] == valorPerguntado || vetor[6] == valorPerguntado || vetor[7] == valorPerguntado || vetor[8] == valorPerguntado || vetor[9] == valorPerguntado){
            printf("Ele esta no vetor! ");
            while(i < 10){
                if(vetor[i] == valorPerguntado){
                    printf("O numero %d ocupa a posicao %d do vetor.\n", valorPerguntado, i);
                }
            i++;
        }
        }
        else{
            printf("Ele nao esta");
        }
    }

    return 0;
}