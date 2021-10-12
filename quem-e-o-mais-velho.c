// Este programa visa comparar duas datas de nascimento para determinar o mais velho.

#include<stdio.h>
int main (void){
    int dia1, mes1, ano1, dia2, mes2, ano2;
    int resto1, resto2;
    printf("Me diga duas datas de nascimento que direi quem e o mais velho.\nVamos a primeira: ");
    scanf("%d %d %d", &dia1, &mes1, &ano1);
    printf("A segunda, agora: ");
    scanf("%d %d %d", &dia2, &mes2, &ano2);

    resto1 = ano1 % 4;

    resto2 = ano2 % 4;

    if(mes1 > 12 || mes2 > 12 || dia1 > 31 || dia2 > 31 || dia1 < 0 || dia2 < 0 || mes1 < 0 || mes2 < 0){
        printf("Uma de suas datas e invalida\nReiniciaremos o processo!\n");
        return main();
    }

    else if( (mes1 == 2 && resto1 != 0 && dia1 > 28) || (mes2 == 2 && resto2 != 0 && dia2 > 28)){
        printf("Uma de suas datas e invalida\nReiniciaremos o processo!\n");
        return main();
    }  

    else if((mes1 == 2 && dia1 > 29) || (mes2 == 2 && dia2 > 29)){ 
        printf("Uma de suas datas e invalida\nReiniciaremos o processo!\n");
        return main();
    }

    else if(((mes1 == 4 || mes1 == 6 || mes1 == 9 || mes1 == 11) && dia1 > 30) || ((mes2 == 4 || mes2 == 6 || mes2 == 9 || mes2 == 11) && dia2 > 30)){
        printf("Uma de suas datas e invalida\nReiniciaremos o processo!\n");
        return main();
    }

    printf("Devido aos meus calculos, consigo concluir que ");

    if(ano1 < ano2){
        printf("o primeiro e mais velho");
    }
    else if(ano2 < ano1){
        printf("o segundo e mais velho");
    }
    else if(ano1 == ano2){
        if(mes1 < mes2){
            printf("o primeiro e mais velho");
        }
        else if(mes2 < mes1){
            printf("o segundo e mais velho");
        }
        else if (mes1 == mes2){
            if(dia1 < dia2){
                printf("o primeiro e mais velho");
            }
            else if(dia2 < dia1){
                printf("o segundo e mais velho");
            }
            else if(dia1 == dia2){
                printf("os dois nasceram no mesmo dia!");
            }
        }
    }

    return 0;
}