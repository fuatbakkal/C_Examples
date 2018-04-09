#include<stdio.h>

int sayi_topla(int);

int main(void)
{
	int n;
	
	printf("\n Kaca kadar toplansin: ");
	scanf("%d", &n);
	
	printf("\n 0'dan %d'e kadar olan sayilarin toplami: %d\n", n, sayi_topla(n));
	
	getchar();
	return 0;
}

int sayi_topla(int n)
{
	int toplam;
	
	if(n<1)
		toplam=0;
		
	else
		toplam=n+sayi_topla(n-1);
		
	return toplam;
}
