#include<stdio.h>

#define BENAR 1
#define SALAH 0

int main(void)
{
	int tahun, kodeHari, tahunKabisat;
	
	tahun = inputTahun();
	kodeHari = determinekodeHari(tahun);
	determinetahunKabisat(tahun);
	kalender(tahun, kodeHari);
	
}

int hariSebulan[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
char *bulan1[]=
{
	" ",
	"\n\n\nJanuari",
	"\n\n\nFebruari",
	"\n\n\nMaret",
	"\n\n\nApril",
	"\n\n\nMei",
	"\n\n\nJuni",
	"\n\n\nJuli",
	"\n\n\nAgustus",
	"\n\n\nSeptember",
	"\n\n\nOktober",
	"\n\n\nNovember",
	"\n\n\nDesember"
};


int inputTahun(void)
{
	int tahun, awalTahun;
	
	printf("Masukkan Tahun : ");
	scanf("%d", &tahun);

	return tahun;
}



int determinekodeHari(int tahun)
{
	int kodeHari;
	int h1, h2, h3;
	
	h1 = (tahun - 1.)/ 4.0;
	h2 = (tahun - 1.)/ 100.;
	h3 = (tahun - 1.)/ 400.;
	kodeHari = (tahun + h1 - h2 + h3) %7;
	return kodeHari;
}


int determinetahunKabisat(int tahun)
{
	if(tahun% 4 == SALAH && tahun%100 != SALAH || tahun%400 == SALAH)
	{
		hariSebulan[2] = 29;
		return BENAR;
	}
	else
	{
		hariSebulan[2] = 28;
		return SALAH;
	}
}

void kalender(int tahun, int kodeHari)
{
	int bulan, hari;
	for (bulan = 1; bulan <= 12; bulan++)
	{
		printf("%s", bulan1[bulan]);
		printf("\n\nMin  Sen  Sel  Rab  Kam  Jum  Sab\n");
		
		for (hari = 1; hari <= 1 + kodeHari * 5; hari++)
		{
			printf(" ");
		}

		for (hari = 1; hari <= hariSebulan[bulan]; hari++)
		{
			printf("%2d", hari);

			if ((hari + kodeHari) % 7 > 0)
				printf("   ");
			else
				printf("\n ");
		}
	
			kodeHari = (kodeHari + hariSebulan[bulan]) % 7;
	}
}
