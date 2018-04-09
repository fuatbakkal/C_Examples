// Dosyaya programdan 'q' girilene kadar karakter yazan program

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	FILE *dosya_yaz;
	char dosya_adi[]="dosya.txt";
	char dosya_modu[]="w";
	
	dosya_yaz=fopen(dosya_adi, dosya_modu);
	
	char kr;
	
	if( (dosya_yaz=fopen(dosya_adi, dosya_modu))==NULL )
	{
		printf(" Dosya acilamadi!\n");
		return 1;
	}
	
	while( (kr=getchar())!='q' )
		fputc(kr, dosya_yaz); //veya putc

	fclose(dosya_yaz);
	
	printf("\n Klavyeden 'q' girildi. Cikmak icin bir tusa bas.");
	
	getch();
	return 0;
}
