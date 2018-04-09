#include <stdio.h>

int main(void)
{
	int sayi=2,son_sayi,asallik,sayac;

	printf("Kaca kadar yazilsin?\n");
	scanf("%d",&son_sayi);
	
	do
	{
		sayac=0;
		
		for(asallik=1; asallik<=sayi; asallik++)
		{
			if(sayi%asallik==0)
			{
				sayac++;
			}
		}

		if(sayac==2)
		{
			printf("\n%d",sayi);
		}

		sayi++;
	}while(sayi<=son_sayi);

	printf("\n\nBitti!");
	getch();
	return 0;
}
