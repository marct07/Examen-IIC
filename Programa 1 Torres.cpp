//Calcular el área de un cuadrado.
#include<conio.h>
#include <stdio.h>
float A,L;
main()
{	
	printf("\nEscribe la longitud del lado del cuadrado\n");
	scanf("%f",&L);
	A=L*L;
	printf("\nEl area del cuadrado es=%.2fm^2\n",A);
	getch();
}
