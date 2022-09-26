#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 50

int main(){
	char frutas[MAX];
	int qtde = -1, n;
	double preco, totalPreco, totalKgs;

	scanf("%d", &n);

	totalKgs = 0;
	totalPreco = .0;

	for (int j; j < n; j++){

        scanf("%lf", &preco);
        getchar();
        scanf("%[^\n]", frutas);
        getchar();

        if (frutas[0] != '\0')
            qtde = 1;

        for (int i = 1; i < strlen(frutas) - 1; i++)
            if (frutas[i] == ' '  &&  frutas[i+1] != '\0')
                qtde++;

        totalKgs += (qtde * 1.0);
        totalPreco += preco;

        printf("dia %d: %d kg\n", j+1, qtde);

    }

    printf("%.2lf kg por dia\n", (totalKgs/n) * 1.0);
    printf("R$ %.2lf por dia\n", (totalPreco/n) * 1.0);

	return 0;
}
