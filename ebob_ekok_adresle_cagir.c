#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void ebob_ekok_bul(int sayi1, int sayi2, int *ebob, int *ekok)
{
	int bolen, buyuk_sayi;

	if(sayi1<sayi2)
		buyuk_sayi=sayi2;

	else
		buyuk_sayi=sayi1;

	if(sayi1==sayi2)
		*ebob=sayi1;
		
	else
	{
		for(bolen=1; bolen<=buyuk_sayi; bolen++)
		{
			if(sayi1%bolen==0&&sayi2%bolen==0)
				*ebob=bolen;
		}
	}

	*ekok=(sayi1*sayi2)/(*ebob);
}

int main(void)
{
	int sayi1, sayi2, ekok, ebob;

	printf("Birinci sayiyi giriniz: ");
	scanf("%d",&sayi1);

	printf("Ikinci sayiyi giriniz: ");
	scanf("%d",&sayi2);

	ebob_ekok_bul(sayi1, sayi2, &ebob, &ekok);

	printf("\n\tEkok: %d\n\tEbob: %d\n", ekok, ebob);

	getch();
	return 0;
}
