#include<stdio.h>

int main(void){
    int x, xmaisum, xmenosum;

    printf("Me diga um numero que direi seu sucessor e antecessor: ");
    scanf("%d", &x);

    xmaisum = x + 1;
    xmenosum = x - 1;

    printf("O numero %d possui como antecessor %d e como sucessor %d", x, xmenosum, xmaisum);

    return 0;
}