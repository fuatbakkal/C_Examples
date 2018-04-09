#include<stdio.h>
#include<conio.h>
int main( void )
{
    
    //İkinci yöntemdeyse, kelime bütün olarak yazılmaz.
    // Bunun yerine harf harf yazılır ve sonlandırmak için
    // en sonuna boş karakter ( NULL ) eklenir:
          
	char isim[] = { 'C','A','N','\0' };
	char soyad[6] = { 'O', 'Z', '\0' };
	printf( "%s %s\n", isim, soyad );
	getch();
}
