#include <stdio.h>

int main(void)
{
	int sayi, ters=0, kalan, sayi2;
	
	printf("Bir sayi gir: ");
	scanf("%d", &sayi);

	sayi2=sayi;

	while(sayi2!=0)
	{
		kalan=sayi2%10;
		ters=ters*10+kalan;
		sayi2=sayi2/10;
	}

	if(ters==sayi) 
		printf("\n%d sayisi palindromiktir.",sayi); 
	else
		printf("\n%d sayisi palindromik degildir.",sayi); 

	getch();
	return 0; 
}
