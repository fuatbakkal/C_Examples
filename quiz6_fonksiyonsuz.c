#include <stdio.h>
#include <conio.h>

int main(void)
{
	int n, k, i, faktor;
	float j, toplam1, toplam2, fark;
	
	printf("\n N'in baslangic degerini girin: ");
	scanf("%d", &n);
	
	do
	{
		toplam1=1.0; // dizinin başındaki ilk terim olan (1) [ (1) + 1/1! + 1/2! + .... ]
		toplam2=1.0; // ayrıca her do..while döngüsü başında bu değerlerin sıfırlanması yani 1'e eşit olması lazım
		
		for(i=1; i<=n+1; i++)
		{
			faktor=1;
			
			for(k=1; k<=i; k++)
				faktor*=k;
				
			j=1.0/faktor;
			toplam1+=j;
		}
	
		for(i=1; i<=n; i++)
		{
			faktor=1;
			
			for(k=1; k<=i; k++)
				faktor*=k;
				
			j=1.0/faktor;
			toplam2+=j;
		}
	
		fark=toplam1-toplam2;
		
		printf("\n n(%d)-n(%d) = %f - %f = %f",n+1, n, toplam1, toplam2, fark);
		
		if(fark>0.001)
			n++;
		
	} while(fark>0.001);
	
	getch();
	return 0;
}
