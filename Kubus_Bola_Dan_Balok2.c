int main (){
	float sisi, jari2, panjang, lebar, tinggi, volume;
	char menu;
	
	printf("MENU\n");
	printf("a. Volume Kubus\n");
	printf("b. Volume Bola\n");
	printf("c. Volume Balok\n");
	printf("Masukkan Pilihan Anda: ");
	scanf("%c", &menu);
	
	if (menu == 'a') {
		printf("Masukkan sisi: ");
		scanf("%f", &sisi);
		volume = sisi * sisi * sisi;
		printf("Volume kubus: %.2f\n", volume);
	}	else if (menu == 'b' ) {
		printf("Masukkan jari2: ");
		scanf("%f", &jari2);
		volume = (4 * 3.14 * jari2 * jari2 * jari2) / 3;
		printf("Volume bola: %.2f\n", volume);
	}	else {
		printf("Masukkan panjang: \n");
		scanf("%f", &panjang);
		printf("Masukkan lebar: \n");
		scanf("%f", &lebar);
		printf("Masukkan tinggi: \n");
		scanf("%f", &tinggi);
		volume = panjang * lebar * tinggi;
		printf("Volume balok: %.2f\n", volume);
		
		return 0;
	}	
	
	

}
