#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define TAM 20

int main(){

    int n;
    char p01[TAM], p02[TAM], aux[2*TAM];
    bool separar = false;
    
    scanf("%d", &n);
    getchar();
    
    for (int qtde = 0; qtde < n; qtde++){
    
        scanf("%[^\n]", aux);
        getchar();
        
        separar = false;
        for (int i = 0, j = 0; i < strlen(aux); i++){
            
            if (aux[i] == ' '){
                separar = true;
                i++;
                j = 0;
            }
            
            if (!separar)
                p01[j++] = toupper (aux[i]);
            else
                p02[j++] = tolower (aux[i]);
            
        }
    
        for (int i = 0; p01[i] != '\0'; i++){
            printf("%c", p01[i]);
            printf("%c", p02[i]);
        }
    
        printf("\n");
        
        for (int i = 0; aux[i] != '\0'; i++)
            aux[i] = '\0';
            
        for (int i = 0; p01[i] != '\0'; i++)
            p01[i] = p02[i] = '\0';
        
    }

    return 0;
}
