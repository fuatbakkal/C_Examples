#include <stdio.h>
#include <conio.h>

void piramit_ciz(int);
void baklava_ciz(int);

int main(void)
{
	int satir_sayisi;
	
	printf("Desenin satir sayisini gir: ");
	scanf("%d", &satir_sayisi);
	printf("\n");
	baklava_ciz(satir_sayisi);
	
	getch();
	return 0;
}

void piramit_ciz(int x)
{
	int i, j, k;
	
	for(i=1; i<=x; i++)
	{
		for(j=1; j<=x-i; j++)
			printf(" ");
			
		for(k=1; k<=2*i-1; k++)
			printf("*");
		
		printf("\n");
	}
}

void baklava_ciz(int x)
{	
	piramit_ciz(x);
	
	int i, j, k;

	for(i=x-1; i>=1; i--)
	{
		for(j=1; j<=x-i; j++)
			printf(" ");
			
		for(k=1; k<=2*i-1; k++)
			printf("*");
		
		printf("\n");
	}
}
