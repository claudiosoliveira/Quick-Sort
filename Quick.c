#include<stdio.h>
#include<stdlib.h>

void ordena(int *vetor, int inicio, int fim)
{
   int i, j, meio, aux;
 
   i = inicio;
   j = fim;
   meio = vetor[(inicio + fim) / 2];
 
   do
   {
      while(vetor[i] < meio)
         i++;
      while(vetor[j] > meio)
         j--;
      if(i <= j)
      {
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i++;
         j--;
      }
   }while(i <= j);
 
   if(inicio < j)
      ordena(vetor, inicio, j);
   if(i < fim)
      ordena(vetor, i, fim);
}

int main()
{
	int n,i;
	scanf("%i",&n);
	int vetor[n];
	for(i=0;i<n;i++)
	{
		scanf("%i",&vetor[i]);
	}
	int h = sizeof(vetor)/sizeof(vetor[0]);
	printf("Antes:\n");
	for(i=0;i<n;i++)
	{
		printf("%i ",vetor[i]);
		if(i==n-1)
		{
			printf("\n");
		}
	}
	ordena(vetor,0,h-1);
	printf("Depois:\n");
	for(i=0;i<n;i++)
	{
		printf("%i ",vetor[i]);
	}
	return 0;
}
