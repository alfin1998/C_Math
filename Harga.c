#include <stdio.h>

int main() 
{
	int harga = 0;
	printf("Harga Smartphone: \n");
	scanf("%i", &harga);
	
	if (harga < 1000000) {
		printf("Murah\n");
	}	else if (harga >= 1000000 && harga < 2000000) {
		printf("Lumayan Mahal\n");
	}	else if (harga >= 2000000 && harga < 5000000) {
		printf("Mahal\n");
	}
	
	return 0;
}
