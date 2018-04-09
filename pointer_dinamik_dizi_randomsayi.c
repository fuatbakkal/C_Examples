#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand((unsigned)time(NULL));
	
	int *p, i, j, ek;
	
	p=(int *)malloc(20*sizeof(int));
	
	for(i=0; i<20; i++)
	{
		*(p+i)=rand()%100;
		printf("\n %2d. sayi: %d", i+1, *(p+i));
	}
	
	ek=*p;
	
	for(i=0; i<20; i++)
		if(*(p+i)<ek)
			ek=*(p+i);
			
	printf("\n\n En kucuk sayi: %d", ek);
	
	free(p);
	
	getch();
	return 0;
}
