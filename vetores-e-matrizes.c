#include <stdio.h>
#include <string.h>

int main(void){
    char list[5][10]; // Cria uma array com 5 palavras de 10 lugares
    char word[10]; // Cria a palavra que a gnt vai usar pra comparar

    for(int i = 0; i < 5; i++){ // Para cada uma das 5 vezes
        printf("Me fala uma palavra: "); // Fala que quer uma palavra
        scanf("%s",list[i]); // Le a palavra do usuário
    }

   printf("Me fala a palavra para comparar: "); // Pede a palavra a ser comparada
   scanf("%s", word); // Le a palavra a ser comparada

   for(int i = 0; i < 5; i++){
        if(strcmp(word, list[i]) == 0){ // Se a diferença entre a palavra passada e a posicao da lista for 0, elas são iguais
            printf("Palavra %s na posição %d\n", word, i); // Retorna a posicao da lista e a palavra
        }
   }

    return 0;
}