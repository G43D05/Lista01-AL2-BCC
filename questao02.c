#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 50

int main(){
	char nome[MAX];
	int tam;
	
	scanf("%[^\n]", nome);
	getchar();
	
	tam = strlen(nome);
	
	for (int i = 0; i < tam; i++)
		nome[i] = toupper(nome[i]);
	
	for (int i = 0; i < tam; i++){
		
		for (int j = 0; j < (i+1); j++){
			
			printf("%c", nome[j]);
			
		}
		
		printf("\n");
		
	}
	
	return 0;
}
