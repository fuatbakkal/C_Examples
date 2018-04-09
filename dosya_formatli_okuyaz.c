// Dosyadan formatlı okuma yapan ve formatlı yazan program /* fscanf() fprintf() */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	char Oku_Dosya_Adi[]="dosya3.txt";
	char Yaz_Dosya_Adi[]="dosya4.txt";
	
	char ad[30];
	int no;
	
	FILE *oku, *yaz;
	
	oku=fopen(Oku_Dosya_Adi, "r");
	yaz=fopen(Yaz_Dosya_Adi, "w");
	
	while(fscanf(oku, "%s %d", &ad, &no)!=EOF)
		fprintf(yaz, "%d %s\n", no, ad);	

	fclose(oku);
	fclose(yaz);
	
	getch();
	return 0;
}
