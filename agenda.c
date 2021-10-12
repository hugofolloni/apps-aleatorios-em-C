#include<stdio.h>

typedef struct _ENDERECO{
    char rua[100], complemento[100], bairro[100], cidade[100], estado[100], pais[100];
    int cep, numero;
} ENDERECO;

typedef struct _AGENDA{
    char nome[100], email[100], obs[100];
    ENDERECO endereco;
    int ddd, telefone, anivd, anivm, anivano;
} AGENDA;

AGENDA array[100];

int i = 0;

int main(){
    int menuChoice, j;

    printf("\n*** AGENDA ***\n\nEscolha o que fazer:\n1. Adicionar nome.\n2. Mostrar dados.\n3. Buscar por nome\n4. Buscar por mes de aniversario\n5. Buscar por data de aniversario [mes ano]\n6. Retirar pessoa\n   ");
    scanf("%d", &menuChoice);

    

    if(menuChoice == 1){
        printf("\nMe diga o nome da pessoa:\n   ");
        scanf("%s", &array[i].nome);

        printf("\nMe diga o email: \n   ");
        scanf("%s", &array[i].email);

        printf("\nMe diga o endereço [rua numero complemento bairro cep cidade estado pais]\n(Nao utilize espaços para a mesma categoria - Ex: RioDeJaneiro):\n   ");
        scanf("%s %d %s %s %d %s %s %s", &array[i].endereco.rua, &array[i].endereco.numero, &array[i].endereco.complemento, &array[i].endereco.bairro, &array[i].endereco.cep, &array[i].endereco.cidade, &array[i].endereco.estado, &array[i].endereco.pais);

        printf("\nMe diga seu DDD (apenas numeros):\n   ");
        scanf("%d", &array[i].ddd);

        printf("\nMe diga seu telefone (apenas numeros):\n   ");
        scanf("%d", &array[i].telefone);

        printf("\nMe diga sua data de nascimento (dia mes ano):\n   ");
        scanf("%d %d %d", &array[i].anivd, &array[i].anivm, &array[i].anivano);

        printf("\nMe diga as observacoes:\n   ");
        scanf("%s", &array[i].obs);

        i++;
        
        main();
    }

    else if(menuChoice == 2){
        int mostrarChoice;
        printf("O que deseja fazer?\n1. Mostrar todos os dados\n2. Mostrar nome, telefone e email\n   ");
        scanf("%d", &mostrarChoice);
        if(mostrarChoice == 1){
            for(j = 0; j < i; j++){
                printf("\n%s,\n %s,\n %s %d %s %s %d %s %s %s,\n (%d) %d,\n %d/%d/%d,\n %s\n\n", array[j].nome, array[j].email, array[j].endereco.rua, array[j].endereco.numero, array[j].endereco.complemento, array[j].endereco.bairro, array[j].endereco.cep, array[j].endereco.cidade, array[j].endereco.estado, array[j].endereco.pais, array[j].ddd, array[j].telefone, array[j].anivd, array[j].anivm, array[j].anivano, array[j].obs);
            }
        }
        else if(mostrarChoice == 2){
            for(j = 0; j < i; j++){
                printf("\n%s,\n %s,\n (%d) %d\n\n", array[j].nome, array[j].email, array[j].ddd, array[j].telefone);
            }
        }
        main();
    }

    else if(menuChoice == 3){
        int tamanhoDoNome;
        char buscaNome = " ";
        printf("Qual nome voce quer buscar?\n   ");
        scanf("%s", &buscaNome);
        for(j = 0; j < i; j++){
            if(array[j].nome == buscaNome){
                printf("\n%s,\n %s,\n %s %d %s %s %d %s %s %s,\n (%d) %d,\n %d/%d/%d,\n %s\n\n", array[j].nome, array[j].email, array[j].endereco.rua, array[j].endereco.numero, array[j].endereco.complemento, array[j].endereco.bairro, array[j].endereco.cep, array[j].endereco.cidade, array[j].endereco.estado, array[j].endereco.pais, array[j].ddd, array[j].telefone, array[j].anivd, array[j].anivm, array[j].anivano, array[j].obs);
            }
        }
        main();
    }

    else if(menuChoice == 4){
        int buscaMes;
        printf("Qual mes voce quer buscar?\n   ");
        scanf("%d", &buscaMes);
        for(j = 0; j < i; j++){
            if(array[j].anivm == buscaMes){
                printf("\n%s,\n %s,\n %s %d %s %s %d %s %s %s,\n (%d) %d,\n %d/%d/%d,\n %s\n\n", array[j].nome, array[j].email, array[j].endereco.rua, array[j].endereco.numero, array[j].endereco.complemento, array[j].endereco.bairro, array[j].endereco.cep, array[j].endereco.cidade, array[j].endereco.estado, array[j].endereco.pais, array[j].ddd, array[j].telefone, array[j].anivd, array[j].anivm, array[j].anivano, array[j].obs);
            }
        }
        main();
    }

    else if(menuChoice == 5){
        int buscaDia, buscaMes;
        printf("Qual data voce quer buscar? [dia mes]\n   ");
        scanf("%d %d", &buscaDia, &buscaMes);
        for(j = 0; j < i; j++){
            if(array[j].anivm == buscaMes && array[j].anivd == buscaDia){
                printf("\n%s,\n %s,\n %s %d %s %s %d %s %s %s,\n (%d) %d,\n %d/%d/%d,\n %s\n\n", array[j].nome, array[j].email, array[j].endereco.rua, array[j].endereco.numero, array[j].endereco.complemento, array[j].endereco.bairro, array[j].endereco.cep, array[j].endereco.cidade, array[j].endereco.estado, array[j].endereco.pais, array[j].ddd, array[j].telefone, array[j].anivd, array[j].anivm, array[j].anivano, array[j].obs);
            }
        }
        main();
    }

    else if(menuChoice == 6){
        int idToRemove;
        for(j = 0; j < i; j++){
            printf("\nID = %d --> %s,\n %s,\n %s %d %s %s %d %s %s %s,\n (%d) %d,\n %d/%d/%d,\n %s\n\n", j, array[j].nome, array[j].email, array[j].endereco.rua, array[j].endereco.numero, array[j].endereco.complemento, array[j].endereco.bairro, array[j].endereco.cep, array[j].endereco.cidade, array[j].endereco.estado, array[j].endereco.pais, array[j].ddd, array[j].telefone, array[j].anivd, array[j].anivm, array[j].anivano, array[j].obs);
        }
        printf("Qual ID você quer apagar?\n   ");
        scanf("%d", &idToRemove);
        for(j = idToRemove; j < i; j++){
            int k;
            for(k = 0; k < 100; k++){
                array[j].nome[k] = array[j+1].nome[k];
                array[j].email[k] = array[j+1].email[k];
                array[j].endereco.rua[k] = array[j+1].endereco.rua[k];
                array[j].endereco.complemento[k] = array[j+1].endereco.complemento[k];
                array[j].endereco.bairro[k] = array[j+1].endereco.bairro[k];
                array[j].endereco.cidade[k] = array[j+1].endereco.cidade[k];
                array[j].endereco.estado[k] = array[j+1].endereco.estado[k];
                array[j].endereco.pais[k] = array[j+1].endereco.pais[k];
                array[j].obs[k] = array[j+1].obs[k];

            }
            array[j].endereco.cep = array[j+1].endereco.cep;
            array[j].endereco.numero = array[j+1].endereco.numero;
            array[j].ddd = array[j+1].ddd;
            array[j].telefone = array[j+1].telefone;
            array[j].anivd = array[j+1].anivd;
            array[j].anivm = array[j+1].anivm;
            array[j].anivano = array[j+1].anivano;
        }
        i--;
    }

    return 0;
}