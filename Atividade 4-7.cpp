#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float celsio;
	
	printf("digite a temperatura em celsios");
	scanf("%f", &celsio);
	
	float conta = (celsio*9/5) + 32;
	
	printf("em f seria %f", conta);
}
