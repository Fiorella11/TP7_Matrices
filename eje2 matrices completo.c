#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int matriz[2][3]={0};
	int i,j;
	
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
	/*
	printf("el resultado es:\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf ("%d \n",matriz[i][j]);
		}
	}
	
	*/
	
	return 0;
}

