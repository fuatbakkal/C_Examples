#include<stdio.h>

int fibonacci(int);

int main(void)
{
	int n, i;
	
	printf(" Terim sayisini girin: ");
	scanf("%d", &n);
	
	printf("\n %d terimli fibonacci dizisi:\n", n);
	
	for (i=0; i<n; i++)
		printf(" %d", fibonacci(i));
	
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
