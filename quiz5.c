#include <stdio.h>
#include <conio.h>

int main()
{
	int sayi, i;
	
	do {
		printf("Sayiyi giriniz: ");
		scanf("%d", &sayi);
		
		if(sayi<2)
			printf("Sayi 2 den kucuk olamaz!\n");

	} while(sayi<2);
	
	printf("\n\t%d sayisinin asal bolenleri:", sayi);
	
	for(i=2; i<=sayi; i++)
	{
		while(sayi%i==0)
		{
			printf(" %d", i);
			sayi/=i;
		}
	}

	printf("\n");
		
	getch();
	return 0;
}
