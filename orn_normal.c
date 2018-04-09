#include <stdio.h>
#include <conio.h>

int main(void)
{
	char ad[21], soyad[21];
	
	puts("Adi: ");
	gets(ad);
	
	puts("Soyadi: ");
	gets(soyad);
	
	printf("\n %c. %s", ad[0], soyad);
	
	getch();
	return 0;
}
