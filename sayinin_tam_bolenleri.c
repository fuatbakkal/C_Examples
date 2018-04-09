#include <stdio.h>

int main(void)
{
	int sayi,bolen;
	
	printf("Bir Sayi giriniz: ");
	scanf("%d", &sayi);
	
	printf("\n%d sayisinin bolenleri:",sayi);
	
	for(bolen=1; bolen<=sayi; bolen++)
	{
		if(sayi%bolen==0)
			printf(" %d",bolen);
	}
	
	getch();
	return 0;
}
