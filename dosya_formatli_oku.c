// Dosyadan formatlı okuma yapan program /* fscanf() */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	FILE *dosya_oku;
	char dosya_adi[]="dosya2.txt";
	char dosya_modu[]="r";
	
	if( (dosya_oku=fopen(dosya_adi, dosya_modu))==NULL )
	{
		printf(" Dosya acilamadi!\n");
		return 1;
	}
	
	dosya_oku=fopen(dosya_adi, dosya_modu);
	
	int mt1, mt2, final;
	float ortalama;
	char ad[30];
	
	while( fscanf(dosya_oku, "%s %d %d %d\n", &ad, &mt1, &mt2, &final)!=EOF )
	{
		ortalama=(mt1*0.25)+(mt2*0.25)+(final*0.5);
		printf(" %s'nin\n ---------\n Vize1: %d\n Vize2: %d\n Final: %d\n Ortalama: %2.2f\n\n", ad, mt1, mt2, final, ortalama);
	}
	
	fclose(dosya_oku);
	
	getch();
	return 0;
}
