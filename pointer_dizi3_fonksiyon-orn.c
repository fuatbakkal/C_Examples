#include <stdio.h>
#include <conio.h>

int topla(int A[], int n) //ya da int topla(int *A, int n)
{
	int *p, toplam=0, i;
	
	p=&A[0]; // ya da p=A;
	
	for(i=0; i<n; i++)
		toplam+=*(p+i); // veya toplam+=*(p++); veya toplam+=p[i];
		
	return toplam;
}

int main()
{
	int i, n;
	
	printf(" Eleman sayisini girin: ");
	scanf("%d", &n);
	
	int dizi[n];
	
	for(i=0; i<n; i++)
		scanf("%d", &dizi[i]);
		
	printf(" Toplam: %d", topla(dizi,n));
	
	getch();
	return 0;
}
