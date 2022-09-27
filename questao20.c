#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define LIM 5
#define TAM 50

typedef struct{
    char nome[TAM];
    char data_Aniversario[15];
    char cidade_Natal[TAM];
    int idade;
    char senha[20];
}Funcionario;

int main(){
    
    int n = 0;
    char subNome[5], subData[4], subCidade[4], idade[3];
    Funcionario f[LIM];
    
    for (int i = 0; i < LIM; i++){
        
        scanf("%[^\n]%*c", f[i].nome);
        if (strcmp(f[i].nome, "SAIR") == 0)
            break;
            
        scanf("%[^\n]%*c", f[i].data_Aniversario);
        scanf("%[^\n]%*c", f[i].cidade_Natal);
        scanf("%d%*c", &f[i].idade);
        
        n = i +1;
        
    }
    
    for (int i = 0; i < n; i++){
        
        for (int j = 0; j < 20; j++)
            f[i].senha[j] = '\0';
        
        for (int j = 0; j < 5; j++)
            subNome[j] = f[i].nome[j];
            
        for (int j = 0, aux = 0; j < 5; j++)
            if (f[i].data_Aniversario[j] != '/')
                subData[aux++] = f[i].data_Aniversario[j];
                
        for (int j = 0, aux = 0; j < 5; j++)
            if (f[i].cidade_Natal[j] != ' ')
                subCidade[aux++] = f[i].cidade_Natal[j];
            
        sprintf(idade, "%d", f[i].idade);
        
        for (int j = 0, aux = 0; j < 5; j++){
            
            f[i].senha[aux++] = subNome[j];
            
            if (j != 4){
                f[i].senha[aux++] = subData[j];
                f[i].senha[aux++] = subCidade[j];
            }
            
        }
        
        strcat(f[i].senha, idade);
        
    }
    
    for (int i = 0; i < n; i++){
        printf("Nome: %s\n", f[i].nome);
        printf("Data de Nascimento: %s\n", f[i].data_Aniversario);
        printf("Cidade Natal: %s\n", f[i].cidade_Natal);
        printf("Idade: %d anos\n", f[i].idade);
        printf("Senha: %s\n\n", f[i].senha);
    }
    
    return 0;
}
