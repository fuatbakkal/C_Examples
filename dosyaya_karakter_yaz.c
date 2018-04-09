// Dosya karakter-string yazan program

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	FILE *dosya_yaz;
	dosya_yaz=fopen("dosya.txt", "w");
	
	int i;
	char st1[]="ADSUMKL";
	
	for(i=0; i<sizeof(st1)-1; i++)
		putc(st1[i], dosya_yaz); // veya fputc
	
	getch();
	return 0;
}
