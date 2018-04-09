#include <stdio.h>
#include <conio.h> // getch() fonksiyonu için
#include <string.h>//strcmp() ve strcpy() fonksiyonları için

#define KARAKTER 15 // Bir isim en fazla "15" karakter olsun

int main(void)
{
    char dizi[][KARAKTER]={"ahmet", "fuat", "arda", "caner", "ali", "osman", "zeynep", "veli", "can", "berk"};
    char gecici[KARAKTER];
	
	for(int i=1; i<(sizeof(dizi)/sizeof(dizi[0])); i++)
		for(int j=0; j<sizeof(dizi)/sizeof(dizi[0])-i; j++)
			if(strcmp(dizi[j],dizi[j+1])>0)
			{
				strcpy(gecici, dizi[j]);
				strcpy(dizi[j], dizi[j+1]);
				strcpy(dizi[j+1], gecici);                
            }
			
	for(int i=0; i<sizeof(dizi)/sizeof(dizi[0]); i++) // Sıralanmış diziyi ekrana yaz
		printf("%s\n", dizi[i]);
		
    getch();
    return 0;
}