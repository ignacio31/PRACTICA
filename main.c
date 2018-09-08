#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void multiplicar(){
	float valorUno=0;
	float valorDos=0;
	float resultado=0;
	
	printf("Ingrese el valor uno:");
	scanf("%f",&valorUno);
	printf("Ingrese el valor dos:");
	scanf("%f",&valorDos);
	
	resultado=valorUno*valorDos;
	
	printf("El resultado de multiplicar %f y %f es:%f\n",valorUno,valorDos,resultado);
	
}

void main(int argc, char *argv[]) {
	char opc;
	
	do{
		multiplicar();
		printf("Desea multiplicar nuevamente:");
		scanf("%s",&opc);

	}
	while((opc=='s')||(opc=='S'));
}

