#include <stdio.h>

int kuvvet(int, int);

int main(void)
{
	int taban, uss, sonuc;
	
	printf(" Tabani girin: ");
	scanf("%d", &taban);
	
	printf(" Ussu girin: ");
	scanf("%d", &uss);
	
	sonuc=kuvvet(taban, uss);
	
	printf("\n Sonuc: %d", sonuc);
	
	getchar();
	return 0;
}

int kuvvet(int taban, int uss)
{
	int sonuc;

	if(uss==0)
		sonuc=1;

	else
		sonuc=taban*kuvvet(taban, uss-1);
		
	return sonuc;
}
