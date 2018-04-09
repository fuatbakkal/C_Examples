#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
    int i,j,k,l;

	/*
	0
	0 1
	0 1 2
	0 1 2 3
	0 1 2 3 4
	0 1 2 3 4 5
		artan kısım
	*/

    for(i=0;i<=5;i++)
    {
    	
    		for(j=0;j<=i;j++)
    		{
    			
    			printf("%d ",j);
    		}
    		
    	printf("\n");
    }


	/*
	0 1 2 3 4
	0 1 2 3
	0 1 2
	0 1
	0
		azalan kısım
	*/

    for(k=5;k>=0;k--)
    {
    	
    		for(l=0;l<k;l++)
    		{
    			printf("%d ",l);
    		}
    		
    	printf("\n");
    }

    getch();
    return 0;
}
