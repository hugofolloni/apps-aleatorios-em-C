// Conversor de bases de formas nao convencionais

#include <stdio.h>

int main(void){
    int escolha;
    printf("O que deseja fazer?\n<Conversão de base>\n1: decimal para hexadecimal\n2: hexadecimal para decimal\n3: decimal para octal\n4: octal para decimal\n5: Encerra\n");
    scanf("%d", &escolha);
    
    if(escolha == 1){ // CONVERSOR DE DECIMAL PARA HEXADECIMAL
        int decimal, resto, resultado, i, j=0, voltar;
        char hex[100];
        
        printf("Qual o seu numero? ");
        scanf("%d", &decimal);
        resultado = decimal;
    
        while(resultado != 0){
            resto = resultado % 16;
            if(resto < 10){
                hex[j++] = 48 + resto; // CASO RESTO SEJA MENOR QUE 10, SERÁ UM NUMERO (CODIGO ASCII)
            }
            else {
                hex[j++] = 97 + resto - 10; // CASO SEJA MAIOR QUE 10, SERÁ UMA LETRA (CODIGO ASCII)
            }
            resultado = resultado / 16;
            
            }

        printf("%d em decimal = ", decimal);
        for(i = j-1; i >= 0; i--){ // TEM QUE PRINTAR INVERTIDO, POIS A CONVERSÃO VAI SUBINDO NA DIVISÃO.
            printf("%c", hex[i]);
        }
        printf(" em hexadecimal.\nO que fara agora?\n1: retorna ao menu.\n2: encerra o programa. ");
        scanf("%d", &voltar);

        if(voltar == 1){
            return main(); // RETORNA AO MENU PRINCIPAL
        }
        else if(voltar == 2){
            return 0;
        }
    }

    else if(escolha == 3){ // CONVERSOR DE DECIMAL PARA OCTAL
        int decimal, resto, resultado, i, j=0, voltar;
        char oct[100];
        
        printf("Qual o seu numero? ");
        scanf("%d", &decimal);
        resultado = decimal;
    
        while(resultado != 0){
            resto = resultado % 8;
            oct[j++] = resto + 48; // CODIGO ASCII
            resultado = resultado / 8;
            
            }

        printf("%d em decimal = ", decimal);
        for(i = j-1; i >= 0; i--){
            printf("%c", oct[i]); // PRINTA AO CONTRARIO, POIS VAI SUBINDO NA DIVISAO
        }
        printf(" em octal.\nO que fara agora?\n1: retorna ao menu.\n2: encerra o programa. ");
        scanf("%d", &voltar);

        if(voltar == 1){
            return main(); // RETORNA AO MENU PRINCIPAL
        }
        else if(voltar == 2){
            return 0;
        }
    }

    else if(escolha == 4){ // CONVERTE DE OCTAL PARA DECIMAL
        int oct, resultado = 0, i = 0, resto, quebrar, voltar, agora, expoente = 1;
        
        printf("Qual o seu numero? ");
        scanf("%d", &oct);
        quebrar = oct;
    
        while(quebrar > 0){ // QUEBRA O NÚMERO POR POTÊNCIA DE 10 E MULTIPLICA PELA POTÊNCIA EQUIVALENTE DE 8, PARA DEPOIS SOMAR TUDO
            resto = quebrar % 10;
            agora = resto * expoente;
            expoente = expoente * 8;
            resultado = resultado + agora;
            quebrar = quebrar / 10;
            i++;
        }

        printf("%d em octal = %d em decimal.\nO que fara agora?\n1: retorna ao menu.\n2: encerra o programa.", oct, resultado);
        scanf("%d", &voltar);

        if(voltar == 1){
            return main(); 
        }
        else if(voltar == 2){
            return 0;
        }
    }    

    else if(escolha == 2){ // CONVERTE DE HEXADECIMAL PARA DECIMAL
        int resultado = 0, i = 0, j = 0, voltar, agora, size, algarismo, base = 1, tamanhoChecker;
        char hex[100] = "";

            
        printf("Qual o seu numero? ");
        scanf("%s", &hex);
        
        for(tamanhoChecker = 0; tamanhoChecker < 100; tamanhoChecker++){ // CHECKA O TAMANHO DA STRING QUE O USUÁRIO COLOCOU, PARA DETERMINAR O TAMANHO DA BASE 
            if(hex[tamanhoChecker] != ((algarismo >= 48 && algarismo <= 57) || (algarismo >= 65 && algarismo <= 70) || (algarismo >= 97 && algarismo <= 102))){
                size = tamanhoChecker + 1;
            }
        }

        while(size - 1 > j){ // COLOCA A BASE NA POTÊNCIA DO TAMANHO QUE O USUÁRIO ESCOLHEU
            base = base * 16;
            j++;
        }

        for(i = 0; i < size; i++){
            algarismo = hex[i];
            if(algarismo >= 48 && algarismo <= 57){ // TRANSFORMA CODIGO ASCII (POIS ESTÁ EM STRING) EM NUMERO
                algarismo = algarismo - 48;
            }
            else if(algarismo >= 65 && algarismo <= 70){
                algarismo = algarismo - 55;
            }
            else if(algarismo >= 97 && algarismo <= 102){
                algarismo = algarismo - 87;
            }
            agora = algarismo * base;
            base = base / 16; // DIVIDE A BASE POR 16 PARA NA PASSAGEM DO PROXIMO LOOP DIMINUIR UMA POTÊNCIA COM BASE NA POSIÇÃO
            resultado = resultado + agora;
        }

        printf("%s em hexadecimal = %d em decimal.\nO que fara agora?\n1: retorna ao menu.\n2: encerra o programa.", hex, resultado);
        scanf("%d", &voltar);

         if(voltar == 1){
            return main(); 
        }
        else if(voltar == 2){
            return 0;
        }
    }

    else if(escolha == 5){
        return 0;
    }
}
