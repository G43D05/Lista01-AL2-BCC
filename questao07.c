#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define TAM 100

int main(){
    
    char aux[TAM], frase01[TAM], frase02[TAM];
    
    for (int i = 0; i < TAM; i++)
        frase01[i] = frase02[i] = '\0';
    
    scanf("%[^\n]", aux);
    getchar();
    
    for (int i = 0, j = 0; i < strlen(aux); i++){
        if (aux[i] != ' '  && aux[i] != '.'  && aux[i] != ',' && aux[i] != '!' && aux[i] != '?')
            frase01[j++] = tolower(aux[i]);
    }
    
    scanf("%[^\n]", aux);
    getchar();
    
    for (int i = 0, j = 0; i < strlen(aux); i++){
        if (aux[i] != ' '  && aux[i] != '.'  && aux[i] != ',' && aux[i] != '!' && aux[i] != '?')
            frase02[j++] = tolower(aux[i]);
    }
    
    if (strlen(frase01) != strlen(frase02)){
        printf("False\n");
        return 0;
    }
    
    for (int i = 0; i < strlen(frase01); i++){
        for (int j = 0; j < strlen(frase01); j++){
            
            if (frase01[i] == frase02[j]){
                frase01[i] = frase02[j] = '\0';
                break;
            }
            
        }
    }
    
    printf("%s\n", strlen(frase01) == 0 ? "True":"False");

    return 0;
}
