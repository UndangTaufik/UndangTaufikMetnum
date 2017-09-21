#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

int fungsiMath(int x){
	return (2*x*x)-(4*x)+1;
}

int main () {
	int pilih;
	int angkaP, angkaK;
	int hasil;
	int x;

	Home :
	printf (" pilih salah satu menu dibawah ini ! ");
	printf ("\n______________________________________");
	printf ("\n 1. Penjumlahan");
	printf ("\n 2. Pengurangan");
	printf ("\n 3. perkalian");
	printf ("\n 4. pembagian");
	printf ("\n 5. Perpangkatan");
	printf ("\n 6. Fungsi f(x)");
	printf ("\n 7. keluar");
	printf ("\n masukan pilihan anda : ");
	scanf ("%d",&pilih);
	switch(pilih){
		
	case 1 : //tambah
		
		printf ("\n Masukan angka pertamax = ");
		scanf ("%d",&angkaP);
		printf ("\n Masukan angka keduax = ");
		scanf ("%d",&angkaK);
		hasil = angkaP + angkaK;
		printf ("\n hasil penjumlahan dari angkaP dan angkaK adalah :%d\n",hasil);
		goto Home;
		
	case 2 : //kurang
		
		printf ("\n Masukan angka pertamax = ");
		scanf ("%d",&angkaP);
		printf ("\n Masukan angka keduax = ");
		scanf ("%d",&angkaK);
		hasil = angkaP - angkaK;
		printf ("\n hasil pengurangan dari angkaP dan angkaK adalah :%d\n",hasil);
		goto Home;
		
	case 3 : //kali
		
		printf ("\n Masukan angka pertamax = ");
		scanf ("%d",&angkaP);
		printf ("\n Masukan angka keduax = ");
		scanf ("%d",&angkaK);
		hasil = angkaP * angkaK;
		printf ("\n hasil perkalian dari angkaP dan angkaK adalah :%d\n",hasil);
		goto Home;	
		
	
	case 4 : //bagi
		
		printf ("\n Masukan angka pertamax = ");
		scanf ("%d",&angkaP);
		printf ("\n Masukan angka keduax = ");
		scanf ("%d",&angkaK);
		hasil = angkaP / angkaK;
		printf ("\n hasil perpangkatan dari angkaP dan angkaK adalah :%d\n",hasil);
		goto Home;	
		
	case 5 : //pangkat
		
		printf ("\n Masukan angka yang akan dipangkatkan = ");
		scanf ("%d",&angkaP);
		printf ("\n masukan pangkat = ");
		scanf ("%d",&angkaK);
		hasil = pow(angkaP, angkaK);
		printf ("\n hasil perpangkatan dari angkaP dan angkaK adalah :%d\n",hasil);
		goto Home;
		
	case 6 : //fungsi
		
		printf ("\n Masukan nilai x = ");
		scanf ("%d",&x);
		printf ("\n hasil fungsi f(x) adalah :%d\n",fungsiMath(x));
		goto Home;
		
	}
}





