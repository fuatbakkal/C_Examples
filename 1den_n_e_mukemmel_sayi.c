#include <stdio.h>
#include <conio.h>

int main()
{
	int i,j,sayi,toplam;
	
	printf("\n Kaca kadar yazilsin?: ");
	scanf("%d", &sayi);
	
	printf("\n\t");
	
	for(i=1; i<=sayi; i++)
	{
		toplam=0;
		
		for(j=1; j<i; j++)
		{
			if(i%j==0)
				toplam+=j;
		}
		
		if(toplam==i)
			printf(" %d", i);
	}
	
	getch();
	return 0;
}
