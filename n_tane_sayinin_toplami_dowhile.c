#include <stdio.h>
#include <conio.h>

int main(void)
{
	int s,sayi,toplam=0;

	printf("n tane sayiyi toplayan program.\nSonlandirmak icin 0 girin!\n--------------------------\n");

	do
	{
		printf("Sayi gir: ");
		scanf("%d", &sayi);
		toplam=toplam+sayi;
	} while(sayi!=0);

	printf("\n\tToplam: %d", toplam);

	getch();
	return 0;
}
