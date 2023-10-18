#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int matriz[3][3]={0};
	int i,j;
	int recaudacion=0;
	int fila,columna;
	int totalgen=0,totallin=0;
	
	while (columna>0)
	{
		printf ("ingrese linea: ");
		scanf ("%d",&fila);
		printf ("ingrese coche: ");
		scanf ("%d",&columna);
		printf ("ingrese recaudacion: ");
		scanf ("%d",&recaudacion);
		
		if(fila>0 && columna>0)
		{
		matriz[fila-1][columna-1]+=recaudacion;
		totalgen+=matriz[fila-1][columna-1];
		}
	}
		printf ("el total general es de: %d\n",totalgen);

	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			totallin+=matriz[i][j];
		}
		printf("el total de la linea %d es de: %d\n",i+1,totallin);
		totallin=0;
	}
	
	for (i=0; i<3; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("el total del coche %d de la linea %d es de: %d\n",j+1,i+1,matriz[i][j]);
		}
	}
	return 0;
}

