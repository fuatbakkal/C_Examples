#include <stdio.h>

int karsilastir(int a,int b)
{
	if(a>b)
		return a;
		
	return b;
}

int main()
{
	int sayi_1, sayi_2,sonuc;
	
	printf("Ilk sayiyi gir: ");
	scanf("%d",&sayi_1);
	
	printf("Ikinci sayiyi gir: ");
	scanf("%d",&sayi_2);
	
	sonuc=karsilastir(sayi_1,sayi_2);
	
	printf("\n\tBuyuk olan sayi: %d",sonuc);
	
	return 0;
}
