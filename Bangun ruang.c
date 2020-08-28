#include <iostream>
using namespace std;

int main(){
	float sisi,jari2,panjang,lebar,tinggi,volume,pilihan;
	char lagi;
	
	do{
		cout<<"Menu Program : "<<endl;
		cout<<"1. Volume Kubus"<<endl;
		cout<<"2. Volume Bola"<<endl;
		cout<<"3. Volume Balok"<<endl;
		cout<<"Masukkan Pilihan : ";cin>>pilihan;
		
		if(pilihan == 1){
			cout<<"Masukkan Sisi : ";cin>>sisi;
			volume = sisi * sisi * sisi;
			cout<<"\nVolume Kubus : "<<volume<<endl;
		}
		else if(pilihan == 2){
			cout<<"Masukkan Jari2 : ";cin>>jari2;
			volume = (4 * 3.14 * jari2 * jari2 * jari2) / 3;
			cout<<"Volume Bola : "<<volume<<endl;		
		}
		else if(pilihan == 3){
			cout<<"Masukkan Panjang : ";cin>>panjang;
			cout<<"Masukkan Lebar : ";cin>>lebar;
			cout<<"Masukkan Tinggi : ";cin>>tinggi;
			volume = panjang * lebar * tinggi;
			cout<<"Volume Balok : "<<volume;
		}
		else{
			cout<<"Menu Tidak Ada !"<<endl;
		}
			
		cout<<endl<<"Ulang lagi ? (y/t) ";cin>>lagi;
		system("cls");
	}while(lagi == 'Y' or lagi == 'y');
	
	return 0;
}
