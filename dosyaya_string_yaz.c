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
	
	char st1[]="Ali", st2[]="Veli", st3[]="Kemal";
	
	if( (dosya_yaz=fopen(dosya_adi, dosya_modu))==NULL )
	{
		printf(" Dosya acilamadi!\n");
		return 1;
	}
	
	fputs(st1, dosya_yaz);
	fprintf(dosya_yaz, "\n");
	
	fputs(st2, dosya_yaz);
	fprintf(dosya_yaz, "\n");
	
	fputs(st3, dosya_yaz);
	fprintf(dosya_yaz, "\n");
	
	fputs("Mehmet", dosya_yaz);
	
	fclose(dosya_yaz);
	
	getch();
	return 0;
}
