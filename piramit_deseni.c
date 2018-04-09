#include <stdio.h>
#include <conio.h>

int main()
{
	
	int x,i,j,k;
	
	printf("\n Piramidin satir sayisini giriniz: ");
	scanf("%d",&x);

	for(i=1; i<=x; i++)
	{
		printf("\n\t");
	
		for(j=1; j<=x-i; j++)
			printf(" ");

		for(k=1; k<=(2*i-1); k++)
			printf("*");
	}

	getch();
	return 0;

}
