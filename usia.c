#include <stdio.h>

int main()
{
	int umur = 0;
	printf("Masukkan Umur: \n");
	scanf ("%i", &umur);
	
	if (umur < 5) {
		printf("\nBalita");
	}	else if (umur < 10) {
		printf("Anak-anak\n");
	}	else if (umur < 17) {
		printf("Remaja\n");
	}	else if (umur <55) {
		printf("Dewasa\n");
	}	else{
		printf("Lanjut Usia\n");
	}
	return 0;
}
	
