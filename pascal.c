#include <stdio.h>
#include <conio.h>

long faktor(int);
void pascal_ucgeni(int);

int main(void)
{
   int i, n, c;

	printf(" Pascal ucgeninin satir sayisini girin: ");
	scanf("%d", &n);
	printf("\n");

	pascal_ucgeni(n);

   getch();
   return 0;
}

long faktor(int n)
{
   int i;
   long sonuc=1;

	for(i=1; i<=n; i++)
		sonuc*=i;

	return sonuc;
}

void pascal_ucgeni(int n)
{
	int i, c;
	
	for (i=0; i<n; i++)
	{
		for (c=0; c<=(n-i-2); c++)
			printf(" ");

		for(c=0; c<=i; c++)
			printf("%ld ",faktor(i)/(faktor(c)*faktor(i-c)));

		printf("\n");
	}
}
