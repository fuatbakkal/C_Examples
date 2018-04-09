#include<stdio.h>
#include<conio.h>
int main( void )
{
	// kisi adinda bir yapi olusturulup
	// baslangic degerleri 'Ali' ve '167'
	// olacak sekilde atanir.
	
	
	
	struct {
		char isim[40];
		int boy;
	} kisi = { "Bilgi Girilmedi", 170 };

    printf("%s %d\n",kisi.isim,kisi.boy);
getch();
}
