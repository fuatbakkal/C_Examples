#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void)
{
	
	int sayi, sayac=0, i=1, c, t, k, j;
	
	do
	{
    	printf("Sayiyi giriniz: ");
    	scanf("%d", &sayi);
	} while(sayi<=0);
	
	do
	{//girilen sayi 2lik tbanda kac basamakli?
    	i*=2;
    	sayac++;
	} while(i<sayi);
	
    for(j=0; j<=sayac; j++)
	{
    	if(sayi%2==1)
		{
			k=(int)pow(2,j);
			printf("%d", k);
			
			if(sayi!=1)
				printf("+");
		}
		sayi/=2;
    }
    
    getch();
    return 0;
}
