#include<stdio.h>

int main()
	{

	int saniye,saat,dakika;

	printf("Saniye Degerini Giriniz: ");
	scanf("%d",&saniye);

	saat=saniye/3600;
	saniye=saniye%3600;
	dakika=saniye/60;
	saniye=saniye%60;

	/* Mod almak yerine tek tek artan saniye hesaplanabilir:
	saat=saniye/3600;
	artan_saniye1=saat*3600;
	saniye=saniye-artan_saniye1;
	dakika=saniye/60;
	artan_saniye2=dakika*60;
	saniye=saniye-artan_saniye2;
	*/

	printf("\n%d saat , %d dakika ve %d saniye",saat,dakika,saniye);

	getch();
	return 0;

	}
