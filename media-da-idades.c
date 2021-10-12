// Este programa visa calcular a média de idade de uma amostra

#include<stdio.h>

int main(void){
    int numeroPessoas, menorIdade, maiorIdade, idade;
    float media;

    numeroPessoas = 0;
    
    printf("Me fala uma idade ");
    scanf("%d", &idade);

    maiorIdade = idade;
    menorIdade = idade;

    while(idade > 0){
        if(idade < menorIdade){
            menorIdade = idade;
        }
        if(idade > maiorIdade){
            maiorIdade = idade;
        }
        numeroPessoas++;
        media = (media * (numeroPessoas - 1) + idade) / numeroPessoas;
            
        printf("Me fala outra idade ");
        scanf("%d", &idade);
    }

    printf("Idade media = %1.1f e Numero de pessoas = %d\nMaior idade = %d e Menor idade = %d", media, numeroPessoas, maiorIdade, menorIdade);

    return 0;
}