#include<stdio.h>

int fibonacci(int);

int main(void)
{
	int n;
	
	printf(" Terimin sirasini girin: ");
	scanf("%d", &n);
	
	printf("\n %d. fibonacci sayisi: %d\n", n, fibonacci(n-1));
	
	getchar();
	return 0;
}

int fibonacci(int n)
{
	if(n==0)
		return 0;
	
	if(n==1)
		return 1;
	
	return (fibonacci(n-1)+fibonacci(n-2));
}
