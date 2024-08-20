#include <stdio.h>

int main() {
	int a, b = 0;
	printf("escreva um dois numeros");
	scanf("%i", &a);
	scanf("%i", &b);
	
	if (a > b){
		printf("%i",a );
		printf("maior que %i", b);
	}
	else if(b > a){
		printf("%i", b); 
		printf("maior que %i", a);
	}
	else{
		printf("sao iguais");
	}
	return 0;	
}
