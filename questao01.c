#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 400

int main(){
	int aux;
	char texto[MAX];

	scanf("%[^\n]", texto);
	getchar();
	
	aux = -1;
	
	for (int i = 0; i < strlen(texto); i++){
		
		if (texto[i] == ' '){
			
			aux = i;
			
		}
		
	}
	
	for (int i = aux+1; i < strlen(texto); i++)
        printf("%c", texto[i]);
        
    printf("\n");
    
	
	return 0;
}
