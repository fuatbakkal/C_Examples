#include<stdio.h>
#include<string.h>
#include<conio.h>
int main( void )
{
    
    //strcat(  ) ve strncat(  ) fonksiyonları, bir katarı bir başka katarla birleştirmeye yarar. 
    //Fonksiyon adlarında bulunan cat, İngilizce bir kelime olan ve birleştirme anlamına gelen 'concatenate'den gelmiştir.
    //strcat(  ) kendisine verilen katarları tamamen birleştirirken, strncat(  ) belirli bir eleman sayısına kadar birleştirir.
	char ad[30], soyad[20];
	char isim_soyad[50];
	printf( "Ad ve soyadnizi giriniz> " );
	scanf( "%s %s", ad, soyad );
	// isim_soyad <-- ad
	strcat( isim_soyad, ad );
	// isim_soyad <-- ad + " "
	strcat( isim_soyad, " " );
	// isim_soyad <-- ad + " " + soyad
	strcat( isim_soyad, soyad );
	printf( "Tam Isim: %s\n", isim_soyad );
    getch();
}
