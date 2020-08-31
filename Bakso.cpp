#include <stdio.h>

int main(){
	int harga1, harga2, jumlahbeli, total, dibayar, uangkembali;
	char pilihan_bakso;
	
	harga1 = 10000;
	harga2 = 15000;
	
	printf("SELAMAT DATANG DI BAKSO RAHAYU\n\n");
	printf("MENU :\n\n");
	printf("1. Bakso Biasa\n");
	printf("2. Bakso Spesial\n\n");
	printf("Masukkan Pilihan Anda\t: ");
	scanf("%c", &pilihan_bakso);
		
	if (pilihan_bakso == '1')
	{
	printf("Harga Bakso\t\t: Rp. %d\n", harga1);
	printf("Masukkan jumlah pesanan\t: ");
	scanf("%i", &jumlahbeli);
	total = jumlahbeli * harga1;
	printf("Total harga\t\t: Rp. %i\n", total);
	printf("\n");
	printf("Uang yang dibayar\t: Rp. ");
	scanf("%i", &dibayar);
	uangkembali = dibayar - total;
	printf("\n");
	printf("Uang Kembalian\t\t: Rp. %i\n", uangkembali);
	printf("\nTERIMAKASIH ATAS KUNJUNGANNYA\n");
	}
	else if (pilihan_bakso  == '2')
	{
	printf("Harga Bakso\t\t: Rp. %d\n", harga2);
	printf("Masukkan jumlah pesanan\t: ");
	scanf("%i", &jumlahbeli);
	total = jumlahbeli * harga2;
	printf("Total harga\t\t: Rp. %i\n", total);
	printf("\n");
	printf("Uang yang dibayar\t: Rp. ");
	scanf("%i", &dibayar);
	uangkembali = dibayar - total;
	printf("\n");
	printf("Uang Kembalian\t\t: Rp. %i\n", uangkembali);
	printf("\nTERIMAKASIH ATAS KUNJUNGANNYA\n");
	}
	else{
	printf ("\nPilihan yang anda masukkan salah\n");	
	}
	return 0;
}
