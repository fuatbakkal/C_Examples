#include <stdio.h>

int main(void)
{
	int sayi,asallik,sayac=0;
	
	printf("Sifirdan buyuk bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	for(asallik=1; asallik<=sayi; asallik++)
	{
		if(sayi%asallik==0)
		{
			sayac++;
		}
	}
	
	if(sayac==2)
	{
		printf("\nGirilen sayi asaldir!");
	}
	
	else
	{
		printf("\nGirilen sayi asal degildir!");
	}
	
	getch();
	return 0;
}
