#include <stdio.h>

int main (){
	float sisi, jari2, panjang, lebar, tinggi, volume;
	
	printf("Masukkan sisi: \n");
	scanf("%f", &sisi);
	printf("Masukkan jari2: \n");
	scanf("%f", &jari2);
	printf("Masukkan panjang: \n");
	scanf("%f", &panjang);
	printf("Masukkan lebar: \n");
	scanf("%f", &lebar);
	printf("Masukkan tinggi: \n");
	scanf("%f", &tinggi);
	
	volume = sisi * sisi * sisi;
	printf("Volume kubus: %f\n", volume);
	volume = (4 * 3.14 * jari2 * jari2 * jari2) / 3;
	printf("Volume bola: %f\n", volume);
	volume = panjang * lebar * tinggi;
	printf("Volume balok: %f\n", volume);
	
	return 0;
}
