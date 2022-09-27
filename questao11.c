#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define TAM 35

typedef struct{
    double media;
    char nome[TAM];
    int idade;
    char curso;
}aluno;

int main(){

    int aprovadosFilo, aprovados, maioresReprovados, menorIdade;
    char nome[TAM];
    bool rodou = false;
    aluno a;

    aprovadosFilo = aprovados = maioresReprovados = 0;

    scanf("%lf%*c", &a.media);

    while (a.media >= 0){
        scanf("%[^\n]%*c", a.nome);
        scanf("%d%*c", &a.idade);
        scanf("%c%*c", &a.curso);

        if (!rodou){
            menorIdade = a.idade;
            rodou = true;
            strcpy(nome, a.nome);
        }

        if (a.media >= 70){
            aprovados++;

            if (a.curso == 'f')
                aprovadosFilo++;

        }
        else if (a.curso == 's')
            if (a.idade >= 18)
                maioresReprovados++;

        if (a.idade < menorIdade){
            strcpy(nome, a.nome);
            menorIdade = a.idade;
        }


        scanf("%lf%*c", &a.media);
    }

    printf("Quantidade de aprovados em filosofia : %d\n", aprovadosFilo);
    if (strlen(nome) > 0)
        printf("O nome da pessoa mais jovem : %s\n", nome);
    printf("Quantidade de aprovados : %d\n", aprovados);
    printf("Quantidade pessoas maiores de idade nao aprovadas em sociologia : %d\n", maioresReprovados);

    return 0;

}
