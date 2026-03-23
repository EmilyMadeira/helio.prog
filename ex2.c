#include <stdio.h>

void converter(float* fahr){
	*fahr = (5.0 / 9.0) * (*converter-32);
	printf("%f\n", *fahr);
}

int main(){
	float fahr;
	for (int i= 0; i<=4; i++){
		printf("digite um valor para ser convertido para celsius: ", i);
		scanf("%f", &fahr);
		print("seu numero em celsius é: ");
		converter(&fahr);
	}
	return 0;
}

