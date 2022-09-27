#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define TAM 50

typedef struct{
    char nome[TAM];
    char numero[15];
    char vinculo[TAM];
}Contato;

int main(){

    int n, aux;
    char pesquisa[TAM];
    bool achou;

    scanf("%d%*c", &n);
    Contato c[n];

    for (int i = 0; i < n; i++){

        scanf("%[^\n]%*c", c[i].nome);
        scanf("%[^\n]%*c", c[i].numero);
        scanf("%d%*c", &aux);

        switch(aux){
        case 1:
            strcpy(c[i].vinculo, "Familia");
            break;
        case 2:
            strcpy(c[i].vinculo, "Faculdade");
            break;
        case 3:
            strcpy(c[i].vinculo, "Amigo");
            break;
        default:
            break;
        }

    }

    scanf("%[^\n]%*c", pesquisa);
    while(strcmp(pesquisa, "#") != 0){
        
        achou = false;
        for (int i = 0; i < n; i++){
            if (strstr(c[i].nome, pesquisa) != NULL){
                printf("Nome: %s\n", c[i].nome);
                printf("Numero: %s\n", c[i].numero);
                printf("Vinculo: %s\n\n", c[i].vinculo);
                achou = true;
            }
        }
        
        if (!achou)
            printf("%s nao foi cadastrado\n\n", pesquisa);
        
        scanf("%[^\n]%*c", pesquisa);
        
    }

    return 0;

}
