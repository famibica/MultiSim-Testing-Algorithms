#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 320000

int main()
{
    int i, vet[MAX], maior;

    srand(time(NULL));

    for(i=0; i<MAX; i++)
        vet[i] = rand();

    maior = 0;

    for(i=0; i<MAX; i++)
        if(vet[i] > maior)
            maior = vet[i];

    printf("%d", maior);

    return 0;
}
