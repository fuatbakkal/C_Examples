#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	
	/* Değer sabit yer değişir */
	char s[]="ABC";
	const char *p;
	
	p=s;
	
	for(i=0; i<(sizeof(s)/sizeof(char)); i++)
		printf(" %c", p[i]);

	// HATA: p[0]='a';


	/* Yer sabit değer değişir */
	int x[10], y[10];
	int *const ptr=x;
	
	ptr[0]=100;
	ptr[1]=130;
	
	// HATA: ptr=y;
	
	for(i=0; i<(sizeof(x)/sizeof(int)); i++)
		printf(" %d", ptr[i]);
	
		
	/* İkisi de sabit */
	int a[10];
	int b[10];
	const int *const k=a;
	
	// HATA: k=a;
	// HATA: k[0]=13;
	
	getch();
	return 0;
}
