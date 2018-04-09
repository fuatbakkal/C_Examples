//Doğum günü bilgisi isteyip, bunu ekrana yazdıran bir program oluşturalım:
        
        
#include<stdio.h>
#include<conio.h>
int main( void )
{
	struct {
		int yil;
		int ay;
		int gun;
	} dogum_gunu;
	
	printf( "Dogum gununuzu " );
	printf( "GG-AA-YYYY olarak giriniz> ");
	scanf( "%d-%d-%d", 	&dogum_gunu.gun,
				&dogum_gunu.ay,
				&dogum_gunu.yil );
	printf( "Dogum gununuz: " );
	printf( "%d/%d/%d\n",	dogum_gunu.gun,
				dogum_gunu.ay,
				dogum_gunu.yil );
getch();
}
