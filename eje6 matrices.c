#include <stdio.h>
	
	int main() {
	float matriz[20][6]={0};//completamos con 0 toda la matriz
	float suma=0;
	float promedio=0;
	
	for (int i=0; i<20; i++) 
	{
		for (int j=0; j<6; j++) 
		{
			printf("ingrese cantidad de habitantes del piso %d departamento %d: ", i+1,j+1);
			scanf("%f",&matriz[i][j]);
		}
	}
	
	for (int i=0; i<20; i++) 
	{
		for (int j=0; j<6; j++) 
		{
			suma+=matriz[i][j];
		}
	}
	
	printf("la cantidad total de habitantes es: %.0f\n",suma);
	
	promedio=suma/(20*6);
	
	printf("el promedio de cada piso es: %.2f\n",promedio);
	
	return 0;
}
