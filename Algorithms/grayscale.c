#include <stdio.h>
#include <stdlib.h>

#define WIDTH 800
#define HEIGHT 600

float *data;

int gen_image(void);
void to_grayscale(void);

int main(void){
	int success = 0;
	success = gen_image();

	if (success == 0){
		printf("Failed to malloc!\n");
		return 0;
	}

	to_grayscale();
	free(data);

	return 0;
}

int gen_image(){
	data = (float*)malloc(WIDTH * HEIGHT * 3 * sizeof(float));
	
	if (data == NULL) return 0;
	return 1;
}

void to_grayscale(){
	float gray = 0.0f;
	int size = WIDTH * HEIGHT * 3;

	for (int i = 0; i < size; i += 3){
		gray = 0.2126 * data[i] + 0.7152 * data[i + 1] + 0.0722 * data[i + 2];
		data[i] = gray;
		data[i + 1] = gray;
		data[i + 2] = gray;
	}
}
