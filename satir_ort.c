#include <stdio.h>
#include <conio.h>
#include <time.h>

#define M 4
#define N 3

int sayi_uret(int x, int y)
{
	int sayi;
	sayi=rand()%(y-x+1) + x;
		
	return sayi;
}

int main(void)
{
	int i, j, l=0, toplam;
	
	int a[M][N];
	float b[M];
	
	srand (time(NULL));
	
	for(i=0; i<M; i++)
	{
		printf("\n %2d. satir elemanlari\n  -------------------\n", i+1);
		
		for(j=0; j<N; j++)
		{
			l++;
			a[i][j]=sayi_uret(-9, 99);
			printf(" %2d. eleman a[%d][%d]: %d\n",l,i,j,a[i][j]);
		}
	}

	// a matrisinin her bir satırındaki en büyük elemanı bul ve b dizisine ata
	for(i=0; i<M; i++)
	{
		toplam=0;
		for(j=0; j<N; j++)
		{
			toplam=toplam+a[i][j];
		}
		b[i]=(float)toplam/N;
	}
	
	printf("\n a[%d][%d] Matrisi\n ---------------\n",M,N);
	for(i=0; i<M; i++)
	{
		printf(" |");
		for(j=0; j<N; j++)
		{
			printf(" %2d", a[i][j]);
		}
		printf(" |");
		
		if(i==M-1 && j==N)
			printf(" %dx%d",M,N);
			
		printf("\n");
	}
	
	printf("\n b[%d] Dizisi\n -----------\n",M);
	
	for(i=0; i<M; i++)
		printf(" b[%d]=%0.2f\n",i,b[i]);
	
	getch();
	return 0;
}
