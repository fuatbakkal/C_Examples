// Dosyadan tek karakter okuyan ve ekrana yazdıran program

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	FILE *dosya_oku;
	dosya_oku=fopen("dosya.txt", "r");
	
	char kr;
	
	kr=getc(dosya_oku); //dosya_oku'daki ilk karakteri oku ve kr'ye ata // veya fgetc
	
	printf(" Karakter = %c\n", kr);
	
	getch();
	return 0;
}
