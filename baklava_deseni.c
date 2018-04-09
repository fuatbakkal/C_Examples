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
    char y='*';

	do
	{
    	printf("Tek sayi giriniz: ");
    	scanf("%d",&sayi);
    	
    	if(sayi%2==0)
    		printf("Cift sayi girdiniz!\n\n");
    		
	} while(sayi%2==0);

    // Orta Satıra Kadar
    for (i=1;i<=(sayi/2);i++)
    {
        printf("\n%*c",sayi-i,y);
        for (j=1;j<i*2-1;j++)
            printf("*");
    }

    // Orta Satır
    printf("\n%*c",sayi/2,y);
    for (i=1;i<sayi;i++)
        printf("*");

    // Orta Satırın Altı
    for (i=(sayi/2);i>=1;i--)
    {
        printf("\n%*c",sayi-i,y);
        for (j=1;j<i*2-1;j++)
            printf("*");
    }

    printf("\n\n");

    getch();
    return 0;
}
