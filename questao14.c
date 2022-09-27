#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define TAM 50
#define LIMITE 44

typedef struct{
    int id;
    int numPassagem;
    char data[15];
    char origem[TAM];
    char destino[TAM];
    char horario[15];
    int poltrona;
    int idade;
    char nome[TAM];
}Passageiro;

int main(){

    Passageiro p[LIMITE];
    int contador;
    double media;

    contador = 0;
    for (int i = 0; i < LIMITE; i++){

        scanf("%d%*c", &p[i].numPassagem);

        if (p[i].numPassagem == -1){
            p[i].id = -1;
            break;
        }

        p[i].id = i;
        scanf("%[^\n]%*c", p[i].data);
        scanf("%[^\n]%*c", p[i].origem);
        scanf("%[^\n]%*c", p[i].destino);
        scanf("%[^\n]%*c", p[i].horario);
        scanf("%d%*c", &p[i].poltrona);
        scanf("%d%*c", &p[i].idade);
        scanf("%[^\n]%*c", p[i].nome);

        contador++;

    }

    media = .0;
    for (int i = 0; p[i].id != -1; i++)
        media += p[i].idade;
    media /= (contador * 1.0);

    for (int i = 0; p[i].id != -1; i++)
        if (p[i].idade > media  &&  p[i].poltrona%2 == 0)
            printf("%s\n", p[i].nome);

    return 0;

}
