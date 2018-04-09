#include <stdio.h>
#include <stdlib.h> //malloc() için gerekli
#include <conio.h>

int main(void)
{
	int *x, *z;
	char *y;
	
	x=(int *)malloc(sizeof(int));
	y=(char *)malloc(sizeof(char));
	z=(int *)malloc(sizeof(int));
	
	*x = 42;
	*y = 'A';
	z=x;
	
	printf("X: %d\nY: %c\nZ: %d", *x, *y, *z);
	
	getch();
	return 0;
}
