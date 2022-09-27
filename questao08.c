#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

#define TAM 10

int main(){
    
    char aux[TAM];
    double ab01, ab02, media;
    
    for (int i = 0; i < 4; i++){
        
        scanf("%s", aux);
        
        if (strcmp(aux, "ab1") == 0)
            scanf("%lf", &ab01);
        else if (strcmp(aux, "ab2") == 0)
            scanf("%lf", &ab02);
        else
            scanf("%s", aux);
        
    }
    
    media = (ab01 + ab02) / 2.0;
    
    printf("%.2lf\n", media);
    
    return 0;
}
