#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define TAM 20

typedef struct{
    char nome[TAM];
    int id;
    int nivel;
    int vida;
    int ataque;
    int defesa;
}personagem;

int main(){
    
    int n;
    
    scanf("%d%*c", &n);
    personagem p[n];
    
    for (int i = 0; i < n; i++){
        scanf("%[^\n]%*c", p[i].nome);
        scanf("%d%*c", &p[i].id);
        scanf("%d%*c", &p[i].nivel);
        scanf("%d%*c", &p[i].vida);
        scanf("%d%*c", &p[i].ataque);
        scanf("%d%*c", &p[i].defesa);
    }
    
    for (int i = 0; i < n; i++){
        printf("Nome: %s\n", p[i].nome);
        printf("ID: %d\n", p[i].id);
        printf("Level: %d\n", p[i].nivel);
        printf("Vida: %d\n", p[i].vida);
        printf("Ataque: %d\n", p[i].ataque);
        printf("Defesa: %d\n", p[i].defesa);
    }
    
    return 0;
}
