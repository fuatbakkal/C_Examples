#include<stdio.h>
#include<conio.h>
int main( void )
{
	char isim[25], soyad[30];
	printf( "Ad ve soyad giriniz> ");
	scanf( "%s%s", isim, soyad );
	printf( "Sayin %s %s, hos geldiniz!\n", isim, soyad );
	getch();
}
