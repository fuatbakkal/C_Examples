#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int *kucuk_elemanin_adresi(int A[], int n)
{
	int *p, i;
	p=&A[0];
	
	for(i=1; i<n; i++)
		if(A[i]<*p)
			p=&A[i];
	
	return p;
}

int main(void)
{
	int dizi[]={10,20,3,40,21}, *q, boyut;
	
	boyut=sizeof(dizi)/sizeof(int);
	q=kucuk_elemanin_adresi(dizi, boyut);
	
	printf("\n En kucuk eleman: %d\n Dizinin eleman sayisi: %d", *q, boyut);
	
	getch();
	return 0;
}
