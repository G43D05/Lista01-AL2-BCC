#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

#define TAM 50

typedef struct{
    double raio;
}Circulo;

typedef struct{
    double largura;
    double altura;
}Retangulo;

int main(){
    
    int n;
    char tipo[20];
    Circulo c;
    Retangulo r;
    
    scanf("%d", &n);
    double dimensao_Blocos[n], dimensao_Compartimento;
    
    int cont = 0;
    for (int i = 0; i < n; i++){
    	
    	scanf("%s", tipo);
    	
    	if (strcmp(tipo, "RETANGULAR") == 0){
    		scanf("%lf %lf", &r.largura, &r.altura);
    		
    		dimensao_Blocos[cont++] = sqrt( pow(r.largura, 2) + pow(r.altura, 2) );
    		
		}
		else{
			scanf("%lf", &c.raio);
		}
    	
	}
	
	scanf("%lf", &dimensao_Compartimento);
	
	int contador = 0;
	for (int i = 0; i < cont; i++)
		if (dimensao_Blocos[i] < dimensao_Compartimento)
			contador++;
    
    if (contador == 0)
    	printf("-1\n");
    else{
    	for (int i = 0; i < cont; i++)
    		if (dimensao_Blocos[i] < dimensao_Compartimento)
				printf("%.2lf\n", dimensao_Blocos[i]);
	}
    
    return 0;
    
}
