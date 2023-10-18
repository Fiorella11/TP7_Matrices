#include <stdio.h>

int main() 
{
	
	int matriz[2][3];
	int i,j;
	int valorMenor;
	int suma=0;
	
	printf ("ingrese valores:\n");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf ("%d",&matriz[i][j]);
		}
	}
	
	printf ("la primera fila por cuatro:\n");
	for(j=0; j<3; j++)
	{
		matriz[0][j]*=4;
		printf ("%d \n",matriz[0][j]);
	}
	printf ("la tercera columna multiplicada por tres:\n");
	for(i=0; i<2; i++)
	{
		matriz[i][2]*=3;
		printf ("%d \n",matriz[i][2]);
	}
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			if (matriz[i][j] < valorMenor)
				{
				valorMenor = matriz[i][j];
				}
		}
	}
	printf ("el valor menor es: %d\n",valorMenor); 
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			suma += matriz[i][j];
		}
	}
	printf ("la suma es: %d\n",suma); 
		
	
	
	
	return 0;
}

