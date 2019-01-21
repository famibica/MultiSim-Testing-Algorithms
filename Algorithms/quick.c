#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100000

void quickSort(int valor[], int esquerda, int direita)
{
    int i, j, x, y;
    i = esquerda;
    j = direita;
    x = valor[(esquerda + direita) / 2];

    while(i <= j)
    {
        while(valor[i] < x && i < direita)
        {
            i++;
        }
        while(valor[j] > x && j > esquerda)
        {
            j--;
        }
        if(i <= j)
        {
            y = valor[i];
            valor[i] = valor[j];
            valor[j] = y;
            i++;
            j--;
        }
    }
    if(j > esquerda)
    {
        quickSort(valor, esquerda, j);
    }
    if(i < direita)
    {
        quickSort(valor,  i, direita);
    }
}

int main()
{
	int i, vetor[MAX];
	srand(time(NULL));

	for(i = 0; i < MAX; i++)
        vetor[i] = rand();

	quickSort(vetor, 0, MAX-1);
	return 0;
}
