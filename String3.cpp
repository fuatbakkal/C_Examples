#include<stdio.h>
#include<conio.h>
int main( void )
{
	// Her iki katarada ilk deger  atamasi yapiliyor.
    // Ancak isim katarinda, boyut belirtilmezken, soyad katarinda 
	// boyutu ayrica belirtiyoruz.



	char isim[] = "ABCDE";
	char soyad[6] = "IJK";
	printf( "%s %s\n", isim, soyad );

	getch();
}
