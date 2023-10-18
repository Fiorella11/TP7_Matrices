#include <stdio.h>

int main() {
	
	int matriz[2][3];
	int i=0,j=0;
	
	printf ("ingrese valores:\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf ("%d",&matriz[i][j]);
		}
	}
	
	printf ("la matriz es:\n");
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf ("fila: %d. columna: %d = %d\ n",i,j,matriz[i][j]);
		}
	}
	
	
	return 0;
}

