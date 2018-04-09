/*

     *
    * *
   *   *
  *     *
 *		 *
* * * * * *

*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
	unsigned n, i, j, k;
	
	printf("Kenarlardaki yildiz sayisi: ");
	scanf("%u", &n);
	
	printf("\n");
	
	for(i=1; i<=n; i++)
		printf(" ");
	
	printf("*\n");
	
	for(i=2; i<n; i++)
	{
		for(j=1; j<=n-i; j++)
			printf(" ");
			
		printf(" *");
		
		for(k=1; k<=2*i-3; k++)
			printf(" ");
			
		printf("*\n");
		
	}
	
	for(i=1; i<=n; i++)
		printf(" *");
	
	getch();
	return 0;
}
