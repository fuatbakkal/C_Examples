#include <stdio.h>
#include <conio.h>

int main(void)
{
	int i;
	char k;
	
	int *x, *z;
	char *y;
	
	i = 42;
	k = 'A';
	
	x = &i;
	y = &k;
	z = x;
	
	printf("X: %d\nY: %c\nZ: %d", *x, *y, *z);
	
	getch();
	return 0;
}
