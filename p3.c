//se inicia el progama con la bliblioteca stdio.h//
//se declara la variable i, ma, mesanterior//
//se muestra e pantalla para ingresar el valor de la primera cuota//
//se escribe la funcion con el for para operar las variables//
//se muestra en pantalla para mostrar el total de lo que se pago//


#include <stdio.h>

int cuota_20(){

	int i, ma, mesanterior;

	printf("Ingrese el valor de la primera cuota:\n");

	scanf("%d",&mesanterior);

	for (i=1;i<=20;i++){

		mesanterior=mesanterior*2;
		ma=mesanterior*2;
		printf("$%d\n",ma);
	}
	return ma;
}

void imprimir_total (int ma){
	printf("El total que se pago fue:\n$%d",ma);
	}

int main(){

	 int x;
	x=cuota_20();
	imprimir_total(x);

	return 0;
}
