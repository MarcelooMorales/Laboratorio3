//
#include <stdio.h>

void termometro(int temp){
    int i;
    printf("            .....:::TERMOMETRO:::..... \n");
    printf("0        10        20        30        40        50 \n");
    printf("|        |         |         |         |         | \n");

    for (i=0; i<=temp-2; i++){
        printf("-");
    }
     printf("*");
}

int main (void){

    int c;
    printf(".....:::Este es el termomemtro de la nitidez:::...... \n");
    printf("0        10        20        30        40        50 \n");
    printf("|        |         |         |         |         | \n");
    printf("-------------------------------------------------- \n");
    printf("\n");
    printf("Ingrese los grados celcius del 0 al 50 \n");
    scanf("%d",&c);

    if (c<=50 && c>=0){
        termometro(c);
    }

    else {
        printf("Ingrese un numero entre 0 y 50");
    }

    return 0;
    }
