#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define TAM 50
#define LIMITE 100

typedef struct{
    char nome[TAM];
    int senha;
    char situacao;
}Cliente;

int main(){

    int senha;
    bool cadastrado, n;
    Cliente c[LIMITE];

    n = 0;
    for (int i = 0; i < LIMITE; i++){

        scanf("%[^\n]%*c", c[i].nome);

        if (strcmp(c[i].nome, "SAIR") == 0)
            break;

        scanf("%d%*c", &c[i].senha);
        scanf("%c%*c", &c[i].situacao);

        n++;
    }

    scanf("%d%*c", &senha);
    while(senha != -1){

        cadastrado = false;
        for (int i = 0; i < n; i++){

            if (c[i].senha == senha){
                cadastrado = true;

                if (c[i].situacao == 'P')
                    printf("%s, seja bem-vindo(a)!\n", c[i].nome);
                else
                    printf("Nao esta esquecendo de algo, %s? Procure a recepcao!\n", c[i].nome);

            }

        }

        if (!cadastrado)
            printf("Seja bem-vindo(a)! Procure a recepcao!\n");

        scanf("%d%*c", &senha);
    }

    return 0;

}
