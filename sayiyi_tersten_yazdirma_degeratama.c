#include <stdio.h>

int main(void)
{
	int sayi, ters=0, rem,sayi2;
	
	printf("Enter an integer: ");
	scanf("%d", &sayi);

	sayi2=sayi;

	while(sayi2!=0)
	{
		rem=sayi2%10;
		ters=ters*10+rem;
		sayi2=sayi2/10;
	}

	if(ters==sayi) 
		printf("%d is a palindrome.",sayi); 
	else
		printf("%d is not a palindrome.",sayi); 

	return 0; 
}
