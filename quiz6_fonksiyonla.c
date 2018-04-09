#include <stdio.h>
#include <conio.h>

int faktor(int x)
{
	int i, f=1;
	
	for(i=1; i<=x; i++)
		f*=i;
		
	return f;
}

float dizi_toplami(int x)
{
	int i;
	float j, toplam=1.0;
	
	for(i=1; i<=x; i++)
	{
		j=1.0/faktor(i);
		toplam+=j;
	}

	return toplam;	
}

int main(void)
{
	int n;
	float fark;
	
	printf("\n N'in baslangic degerini girin: ");
	scanf("%d", &n);
	
	do
	{	
		fark=dizi_toplami(n+1)-dizi_toplami(n);
		
		printf("\n n(%d)-n(%d) = %f - %f = %f",n+1, n, dizi_toplami(n+1), dizi_toplami(n), fark);
		
		if(fark>0.001)
			n++;
		
	} while(fark>=0.001);
	
	getch();
	return 0;
}
