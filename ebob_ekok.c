#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int ebobu_bulur(int sayi1,int sayi2)
{
	int ortak_bolen,bolen,buyuk_sayi;

	if(sayi1<sayi2)
		buyuk_sayi=sayi2;

	else
		buyuk_sayi=sayi1;

	if(sayi1==sayi2)
		ortak_bolen=sayi1;
		
	else
	{
		for(bolen=1;bolen<=buyuk_sayi/2;bolen++)
		{
			if(sayi1%bolen==0&&sayi2%bolen==0)
				ortak_bolen=bolen;
		}
	}

	return ortak_bolen;
}

int main()
{
	int sayi1,sayi2,ekok,ebob;

	printf("Birinci sayiyi giriniz: ");
	scanf("%d",&sayi1);

	printf("Ikinci sayiyi giriniz: ");
	scanf("%d",&sayi2);

	ebob=ebobu_bulur(sayi1,sayi2);
	ekok=(sayi1*sayi2)/ebob;

	printf("\n\tEkok: %d Ebob: %d\n",ekok, ebob);

	getch();
	return 0;
}
