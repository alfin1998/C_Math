#include <stdio.h>

int main (){
	float jari2, tinggi, luas;
	char menu;
	
	printf("a. Luas tutup panci\n");
	printf("b. Luas panci\n");
	printf("Masukkan Pilihan Anda: ");
	scanf("%c", &menu);
	
	if (menu == 'a') {
		printf("Masukkan Jari2: ");
		scanf("%f", &jari2);
		luas = 3.14 * jari2 * jari2;
		printf("Luas tutup panci: %.2f\n", luas);
	}	else if (menu == 'b' ) {
		printf("Masukkan Jari2: ");
		scanf("%f", &jari2);
		printf("Masukkan Tinggi: ");
		scanf("%f", &tinggi);
		luas = (2 * 3.14 * jari2 * (jari2 + tinggi));
		printf("Luas panci: %.2f\n", luas);
	
		
		return 0;
	}	
	
	

}
