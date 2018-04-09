#include <stdio.h>
#include <windows.h> //Sleep komutu için gerekli

/* Basit toplama işlemi. Sonucun virgülden sonraki 3 basamağını da verir */

/* Not: \a ses çıkartır. \t Tab boşluğu yaratır */

main ( ) {
	float x,y,z;
	printf("Ilk sayiyi giriniz:\n");
	scanf("%f", &x);
	
	printf("\n");
	
	printf("Ikinci sayiyi giriniz:\n");
	scanf("%f", &y);
	
	printf("\n");
	
	// İşlemi yap ve kullanıcıya bilgi ver
	z=x+y;
	printf("\tIslem: %.3f+%.3f\n\a", x,y);
	
	// 200 milisaniyelik gecikme ekle
	Sleep(200);
	
	printf("\n");

	// Sonucu yaz
	printf("\tSonuc: %.3f\n\a", z);
	
	// Bekle
	getch();
	
	return 0;
}