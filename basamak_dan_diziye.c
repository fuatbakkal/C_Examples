#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int kuvvet(int, int);
int kac_basamakli(int);

int main(void)
{
	int sayi, bs, i, bsd, yazim;
	
	printf("Sayiyi giriniz: ");
	scanf("%d", &sayi);
	
	bs=kac_basamakli(sayi);
	
	int basamak[bs];
	
	for(i=1; i<=bs; i++)
	{
		bsd=sayi%10;
		basamak[i]=bsd;
		sayi/=10;
		yazim=kuvvet(10,i-1);
		printf("\n%*d'ler basamagi: %d", bs, yazim, basamak[i]);

	}
	
	getch();
	return 0;
}

int kuvvet(int x, int y)
{
	int i, j=1;
	
	for(i=1; i<=y; i++)
	{
		j*=x;
	}
	
	return j;
}

int kac_basamakli(int x)
{
	int i=0;
	
	if(x>=0)
	{
		do
		{
			x/=10;
			i++;
		} while(x>0);
	
		return i;
	}
	
	else
	{
		do
		{
			x/=10;
			i++;
		} while(x<0);
	
		return i;
	}
	return -1;
}
