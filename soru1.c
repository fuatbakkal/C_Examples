#include <stdio.h>
#include <stdlib.h> // malloc() fonksiyonu için gerekli
#include <conio.h>

int b_bul(int **, int, int);
int k_bul(int **, int, int);
float ortalama_bul(int **, int, int);

int main(void)
{
	int satir, sutun, i, j, eb, ek;
	float ortalama;
	
	printf("\n Satir sayisini girin: ");
	scanf("%d", &satir);
	
	printf(" Sutun sayisini girin: ");
	scanf("%d", &sutun);
	
	/* Matrisin boyutu derleme sırasında bilinmediği için malloc()
	fonksiyonu ile her bir eleman için bellek ayırmak gerekir */
	
    int **matris = (int**)malloc(sizeof(int*)*satir);
    
    for(i=0; i<sutun; i++)
    	*(matris+i) = (int*)malloc(sizeof(int)*satir);
	
	printf("\n Matrisin elemanlarini girin\n----------------------------\n");
	for(i=0; i<satir; i++)
	{
		for(j=0; j<sutun; j++)
		{
			printf(" a[%d][%d]: ",i,j);
			scanf("%d", &matris[i][j]);
		}
	}
	
	eb=b_bul(matris, satir, sutun);
	ek=k_bul(matris, satir, sutun);
	ortalama=ortalama_bul(matris, satir, sutun);
	
	printf("\n En buyuk eleman: %d", eb);
	printf("\n En kucuk eleman: %d", ek);
	printf("\n Ortalama: %0.2f", ortalama);
	
	getch();
	return 0;
}

int b_bul(int **a, int m, int n)
{
	int i, j, eb;
	
	eb=a[0][0];
	
	for(i=0; i<m; i++)
	{
		for(j=1; j<n; j++)
		{
			if(a[i][j]>eb)
				eb=a[i][j];
		}
	}
	
	return eb;
}

int k_bul(int **a, int m, int n)
{
	int i, j, ek;
	
	ek=a[0][0];
	
	for(i=0; i<m; i++)
	{
		for(j=1; j<n; j++)
		{
			if(a[i][j]<ek)
				ek=a[i][j];
		}
	}
	
	return ek;
}

float ortalama_bul(int **a, int m, int n)
{
	int i, j, toplam=0;
	
	float ortalama;
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			toplam+=a[i][j];
		}
	}
	
	ortalama=(float)toplam/(m*n);
	
	return ortalama;
}
