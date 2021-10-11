// Este projeto tem como função calcular a idade do usuário com base em sua data de nascimento

#include <stdio.h>
#include <time.h>

int main(void) {
    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);

    int dayb, monthb, yearb, dayc, monthc, yearc, age;

    printf("Me diga sua data de nascimento que eu calcularei a sua idade.\n");
    printf("Comece me contando o dia do seu nascimento ");
    scanf("%d", &dayb);
    printf("Me diga o mes do seu nascimento ");
    scanf("%d", &monthb);
    printf("Em que ano voce nasceu ");
    scanf("%d", &yearb);

    printf("Okay, calcularei a sua idade!\n");

    dayc = tm.tm_mday;
    monthc = tm.tm_mon + 1;
    yearc = tm.tm_year + 1900;  

    if(monthb < monthc){
        age = yearc - yearb;
        printf("Voce tem %d anos", age);
    }  
    else if (monthb > monthc)
    {
        age = (yearc - yearb) - 1;
        printf("Voce tem %d anos", age);
    }
    else if (monthb == monthc)
    {
        if(dayb >= dayc){
            age = yearc - yearb;
            printf("Voce tem %d anos", age);
        }
        else{
            age = (yearc - yearb) - 1;
            printf("Voce tem %d anos", age);
        }
    }

    return 0;   
}
