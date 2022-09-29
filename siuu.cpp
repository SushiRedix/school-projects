#include <stdio.h>

int main() {
	int a, b, sum;
	printf("Inserisci il primo numero\n");
	scanf("%d", &a);
	printf("Inserisci il secondo numero\n");
	scanf("%d", &b);
	sum = a + b;
	printf("Somma: %d\n", sum);
	
	if(sum == 69) {
		printf("Nice");
		return 0;	
	}
	else {
		return 1;
	}
}
