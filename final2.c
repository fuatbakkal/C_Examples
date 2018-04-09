#include <stdio.h>
#include <conio.h>

void sayi_piramidi(int);

int main(void)
{
	int x;
	
	printf("\n Satir sayisini gir: ");
	scanf("%d", &x);
	
	sayi_piramidi(x);
	
	getch();
	return 0;
}

void sayi_piramidi(int x)
{
	int i, j, k;
	
	for(i=1; i<=x; i++)
	{
		printf("\n\t");

		for(j=1; j<=x-i; j++)
			printf(" ");

		for(k=1; k<=i; k++)
			printf("%d", k);
			
		for(k=i-1; k>=1; k--)
			printf("%d", k);
	}
}
