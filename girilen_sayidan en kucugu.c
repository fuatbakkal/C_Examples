#include<stdio.h>

int main(void)
{
	int kucuk,sayac=0;
	
	do
	{
		int sayi;
		
		printf("Bir sayi girin: ");
		scanf("%d", &sayi);
		
		if(sayac==0)
		{
			kucuk=sayi;
		}
		
		if(kucuk>sayi)
		{
			kucuk=sayi;
		}
		
		sayac++;
	} while(sayac<=10);
	
	printf("\n\tEn kucuk sayi: %d", kucuk);
	
	return 0;
}
