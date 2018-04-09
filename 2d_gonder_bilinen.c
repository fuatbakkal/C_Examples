#include <stdio.h>
#include <conio.h>
#define M 2
#define N 2

void fonk(int a[][N]);

int main(void)
{
	int i, j;
	
	int a[M][N];
	
	
	printf("\n Fonk oncesi: ");
	
	for(i=0; i<M; i++)
	{
		for(j=0; j<M; j++)
		{
			a[i][j]=((i*j)+(i+j))+j+5;
			printf(" %d", a[i][j]);
		}
	}
	
	fonk(a);
	
	printf("\n Fonk sonrasi: ");
	
	for(i=0; i<M; i++)
	{
		for(j=0; j<M; j++)
		{
			printf(" %d", a[i][j]);
		}
	}
	
	getch();
	return 0;
}

void fonk(int a[][N])
{
	int i, j;
	
	for(i=0; i<M; i++)
	{
		for(j=0; j<M; j++)
		{
			a[i][j]=a[i][j]*a[i][j];
		}
	}
}
