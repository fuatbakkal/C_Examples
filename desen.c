#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


/*
    *       1   1
   ***      2   3
  *****     3   5
 *******    4   7
*********
 *******
  *****
   ***
    *

    */

int main()
{
    int sayi,i,j;

    printf("Tek Sayi Giriniz: ");
    scanf("%d",&sayi);

	// Ust Kisim
	for(i=1; i<sayi-2; i++)
	{
		printf("\n*");
		
		for (j=1; j<i*2-1;j++)
		{
        	printf("*");
    	}
	}

	// Alt Kisim
	for(i=sayi-2; i>0; i--)
	{
		printf("\n*");
		for (j=1; j<i*2-1;j++)
		{
        	printf("*");
    	}
	}


    getch();
    return 0;
}

