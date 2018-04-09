#include <stdio.h>

int main(void)
{
	int sayac=1,durum,gecen=0,kalan=0;
	
	printf("Gecenler icin 1, kalanlar icin 0 gir!\n\n");
	
	while(sayac<=7)
	{
		sayac=sayac+1;
		printf("Gecti mi kaldi mi?: ");
		scanf("%d", &durum);
		printf("\n");

		if(durum==1)
		{
			gecen=gecen+1;
		}
		
		else if(durum==0)
		{
			kalan=kalan+1;
		}
	}
	
	printf("\n\tGecenler: %d\t", gecen);
	printf("Kalanlar: %d\n", kalan);
	
	getch();
	return 0;
}
