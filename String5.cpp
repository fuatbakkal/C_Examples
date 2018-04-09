#include<stdio.h>
#include<conio.h>
int main( void )
{
	char cumle[20] = "Denemeler";

	// Cumleyi aynen yazar:
	printf( "%s\n", cumle );

	// 20 karakterlik alan ayirir
	// ve en saga dayali sekilde yazar. 
	printf( "%20s\n", cumle );

	// 20 karakterlik alan ayirir
	// ve en saga dayali sekilde, 
	// katarin ilk bes kelimesini 
	// yazar 	
	
	printf( "%20.5s\n", cumle );

	// 5 karakterlik alan ayirir
	// ve en saga dayali sekilde yazar.
	// Eger girilen kelime 5 karakterden 
	// buyukse, kelimenin hepsi yazilir. 
	
	printf( "%5s\n", cumle );	

	// 20 karakterlik alan ayirir
	// ve sola dayali sekilde yazar. 
	// Sola dayali yazilmasi icin 
	// yuzde isaretinden sonra, - 
	// (eksi) isareti konulur.
	
	printf( "%-20s\n", cumle );
	
	getch();
}
