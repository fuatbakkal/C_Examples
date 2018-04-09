#include<stdio.h>
#include<string.h>
#include<conio.h>
int main( void )
{
	// sahis_bilgileri, yapimizin 
	// etiketidir.
	struct sahis_bilgileri {
		char isim[40];
		int boy;
	};

	// Yapidan iki adet degisken 
	// tanimliyoruz.
	struct sahis_bilgileri kisi_1,kisi_3;
	struct sahis_bilgileri kisi_2;
	
	// Birinci sahsin bilgilerini 
	// kaydediyoruz.
	strcpy( kisi_1.isim, "AHMET" );
	kisi_1.boy = 170;

strcpy( kisi_3.isim, "BEKİR" );
	kisi_3.boy = 190;
	// Ikinci sahsin bilgilerini 
	// kaydediyoruz.
	strcpy( kisi_2.isim, "MEHMET" );
	kisi_2.boy = 176;

    printf("%s %d\n",kisi_1.isim,kisi_1.boy);
    printf("%s %d\n",kisi_2.isim,kisi_2.boy);
    printf("%s %d\n",kisi_3.isim,kisi_3.boy);
    getch();
}
