#include <stdio.h>
#include <conio.h>

int main(void)
{
	int s,sayi=1,toplam=0;

	printf("n tane sayiyi toplayan program.\nSonlandirmak icin 0 girin!\n--------------------------\n");

		for(s=-1; sayi!=0; s++)
		{
		printf("Sayi gir: ");
		scanf("%d", &sayi);
		toplam=toplam+sayi;
		}

	printf("\n\t%d tane sayi girdin!\n", s);
	printf("\tVe bunlarin toplami = %d", toplam);

	getch();
	return 0;
}
