#include<stdio.h>

int pilihan=10,jumlah[10]={0},total[10]={0};
void menu()
{
	printf("Pilihan Menu Barang dan harga:\n");
	printf("1. Ngulang Rp.5000\n");
	printf("2. SBMPTN Rp.5000\n");
	printf("3. Lainnya Rp.40000\n");
	printf("0. Exit\n");
}
int harga(int a)
{
	if(a==1)
	return 5000;
	else if(a==2)
	return 5000;
	else if(a==3)
	return 40000;
}
void tampilanakhir()
{
	int i,sum=0;
	printf("NamaBarang Jumlah Total\n");
	for(i=1;i<4;i++)
	{
		if(i==1&&jumlah[i]>0)printf("Ngulang ");
		else if(i==2&&jumlah[i]>0)printf("SBMPTN ");
		else if(i==3&&jumlah[i]>0)printf("Lainnya ");
		if(jumlah[i]>0)printf("%i buah Rp.%i,-\n",jumlah[i],total[i]);
	}
	for(i=1;i<4;i++)
	{
		sum=sum+total[i];
	}
	printf("Total Seluruh Barang Rp.%i,-\n",sum);
}
int main()
{
	while(pilihan!=0)
	{
		menu();	
		scanf("%i",&pilihan);
		if(pilihan!=0)
		{
			int jml;
			printf("Masukkan jumlah barang : ");
			scanf("%i",&jml);
			jumlah[pilihan]=jumlah[pilihan]+jml;
			total[pilihan]=jumlah[pilihan]*harga(pilihan);
		}
		printf("\n");
		tampilanakhir();
		printf("\n");
	}
}
