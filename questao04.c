#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define MAX 100

int main(){
	char ra[MAX], aux[2];
	int n, pos;
	bool invalido = false;

    scanf("%d", &n);
    getchar();

    for (int qtde = 0; qtde < n; qtde++){

        scanf("%[^\n]", ra);
        getchar();

        if (strlen(ra) != 20){
            printf("INVALID DATA\n");
            invalido = true;
        }

        aux[0] = ra[0];
        aux[1] = ra[1];

        if (strcmp(aux, "RA") != 0){
            printf("INVALID DATA\n");
            invalido = true;
        }


        if (!invalido){
        for (int i = 2; i < strlen(ra); i++){

            if (ra[i] != '0'){
                pos = i;
                break;
            }

        }

        for (int i = pos; i < strlen(ra); i++)
            printf("%c", ra[i]);

        printf("\n");
        }

    }

	return 0;
}
