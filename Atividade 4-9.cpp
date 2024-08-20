#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, n;
	int f = 1;
	printf("digite numero");
	scanf("%i", &n);
	
	for (i = 1; i <= n; i++){
		f *= i;
	}
	printf("%i", f);
	
	return 0;
	
	

}
	

