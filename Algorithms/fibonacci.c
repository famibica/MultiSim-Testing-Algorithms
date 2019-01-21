#include <stdio.h>
#include <stdlib.h>

#define COUNT 100000

void main(void){
	int i = 2;	
	int *array = (int*)malloc(COUNT * sizeof(int));

	array[0] = 1; array[1] = 1;
	while(i < COUNT){
		array[i] = array[i - 1] + array[i - 2];
		i++;
	}
	
	free(array);
}
