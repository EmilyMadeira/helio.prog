#include <stdio.h>

void multiplica_2(int*);
int main(){
	int x;
	printf("digite um valor: ");
	scanf("%d\n", &x);
	multiplica_2(&x);
	
	printf("Resultado: %d\n", x);
	return 0;
	
}

void multiplica_2(int* num){
	*num = *num *2;
}

