#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	char *ad, *soyad;

	ad=(char *)malloc(21);
	soyad=(char *)malloc(21);
	
	puts("Adi: ");
	gets(ad);
	
	puts("Soyadi: ");
	gets(soyad);
	
	printf("\n %c. %s", *ad, soyad); // veya printf("\n %c. %s", ad[0], soyad);
	
	getch();
	return 0;
}
