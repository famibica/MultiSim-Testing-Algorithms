#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WIDTH 825
#define HEIGHT 825
#define MAX 10000000000

void mult(float **a, float **b);

int main(){
	int print = 0, print_result = 0;

	int a[HEIGHT][WIDTH];// = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int b[HEIGHT][WIDTH];// = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};

	int linha, coluna, i;
	int madd;

	int result[HEIGHT][WIDTH];
	srand(time(NULL));
	
	for (linha = 0; linha < HEIGHT; linha++)
		for (coluna = 0; coluna < WIDTH; coluna++)
		{
			a[linha][coluna] = rand()%MAX+1;
			b[linha][coluna] = rand()%MAX+1;
		}
		

	for (linha = 0; linha < HEIGHT; linha++)
		for (coluna = 0; coluna < WIDTH; coluna++){
			madd = 0;

			for (i = 0; i < HEIGHT; i++)
				madd += a[linha][i] * b[i][coluna];

			result[linha][coluna] = madd;
		}

	// print result

if (print == 1){
for (linha = 0; linha < HEIGHT; linha++){
		for (coluna = 0; coluna < WIDTH; coluna++)
			printf("%d\t", a[linha][coluna]);
		printf("\n");
	}	
printf("\n");
for (linha = 0; linha < HEIGHT; linha++){
		for (coluna = 0; coluna < WIDTH; coluna++)
			printf("%d\t", b[linha][coluna]);
		printf("\n");
	}

printf("\n\n");

}

if (print_result == 1)
for (linha = 0; linha < HEIGHT; linha++){
		for (coluna = 0; coluna < WIDTH; coluna++)
			printf("%d\t", result[linha][coluna]);
		printf("\n");
	}

	return 0;
}
