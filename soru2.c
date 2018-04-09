#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define M 4
#define N 3

int main(void)
{
	int i, j, k, l=0, g;
	
	int a[M][N], b[M];
	
	printf("\n a[%d][%d] matrisin elemanlarini girin\n -----------------------------------\n",M,N);
	
	for(i=0; i<M; i++)
	{
		printf("\n %2d. satir elemanlari\n  -------------------\n", i+1);
		
		for(j=0; j<N; j++)
		{
			l++;
			printf(" %2d. eleman a[%d][%d]: ",l,i,j);
			scanf("%d", &a[i][j]);
		}
	}
	
	// a matrisinin her bir satırındaki en büyük elemanı bul ve b dizisine ata
	for(i=0; i<M; i++)
	{
		for(j=0; j<N; j++)
		{
			for(k=j; k<N; k++)
			{
				if(a[i][k]<=a[i][j])
				{
					g=a[i][k];
					a[i][k]=a[i][j];
					b[i]=a[i][j];
					a[i][j]=g;
				}
			}
		}
	}
	
	printf("\n b[%d] dizisi\n -----------\n",M);
	
	for(i=0; i<M; i++)
		printf(" b[%d]=%d\n",i,b[i]);
	
	getch();
	return 0;
}
