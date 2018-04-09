// Dosyadan birden fazla karakter okuyan ve ekrana yazdıran program

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	FILE *dosya_oku;
	dosya_oku=fopen("dosya.txt", "r");
	
	char st1[50];
	
	fgets(st1, 4, dosya_oku); //dosya_oku'daki ilk 3 karakteri st1 stringine ata
	
	printf(" Katar = %s\n", st1);
	
	getch();
	return 0;
}
