#include <stdio.h>
#include <conio.h>

int main()
{
	int *tam, sayi=15;
	
	tam=&sayi;
	
	sayi=sayi+10;
	
	printf("%d", *tam);
	
	getch();
	return 0;
}
