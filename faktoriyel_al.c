#include<stdio.h>

int faktoriyel(int);

int main(void)
{
	int n;
	
	printf("\n Sayiyi girin: ");
	scanf("%d", &n);
	
	printf("\n %d'in faktoriyeli: %d\n", n, faktoriyel(n));
	
	getchar();
	return 0;
}

int faktoriyel(int n)
{
	if(n<=1)
		return 1;
		
	else
		return n*faktoriyel(n-1);
}
