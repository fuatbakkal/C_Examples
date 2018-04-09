#include <stdio.h>
#include <conio.h>

int main()
{
	int s,ilk,son,toplam=0,c_toplam=0,t_toplam=0;

	do
	{
	printf("\t\t 'den\r");
	scanf("%d", &ilk);

	printf("\t\t 'e kadar olan sayilar toplansin\r");
	scanf("%d", &son);

		if(ilk>son)
		{
			system("cls"); // Ekrani temizler
			printf("Ilk sayi ikinci sayidan kucuk olmalidir!\nLutfen tekrar giriniz!\n\n");
		}

	} while(ilk>son);

		for (s=ilk;s<=son;s++)
		{
			if(s%2==0)
			c_toplam=c_toplam+s;

			else
			t_toplam=t_toplam+s;

			toplam=c_toplam+t_toplam;
		}

	printf("\n\n%d'den %d'e kadar tum sayilarin toplami: %d", ilk,son,toplam);
	printf("\n\n%d'den %d'e kadar tek sayilarin toplami: %d", ilk,son,t_toplam);
	printf("\n\n%d'den %d'e kadar cift sayilarin toplami: %d\n\n", ilk,son,c_toplam);

	getch();
	return 0;
}
