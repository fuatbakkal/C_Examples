#include <stdio.h>
#include <conio.h>

void fonk(int, int);

int main(void)
{
	int satir, sutun, i, j;
	
	printf("\n Satir sayisini girin: ");
	scanf("%d", &satir);
	
	printf(" Sutun sayisini girin: ");
	scanf("%d", &sutun);
	
	fonk(satir, sutun);
	
	getch();
	return 0;
}

void fonk(int m, int n)
{
	int a[m][n], b[m*n];
	
	int i, j, k=0, g, toplam=0;
	
	float ortalama;
	
	// Matrisin elemanlarını ata
	printf("\n Matrisin elemanlarini girin\n----------------------------\n");
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			printf(" a[%d][%d]: ",i,j);
			scanf("%d", &a[i][j]);
		}
	}
	
	// 2 boyutlu dizinin(matrisin) elemanlarını tek boyutlu diziye aktar
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			b[k]=a[i][j];
			k++;
		}
	}
	
	// Diziyi küçükten büyüğe doğru sırala(Bubble sorting)
    for(i=0; i<m*n; i++)
    {
        for(j=0; j<m*n-1; j++)
        {
            if(b[j]>b[j+1]) // < yazılırsa büyükten küçüğe doğru sıralar
            {
                g=b[j];
                b[j]=b[j+1];
                b[j+1]=g;
            }
        }
    }

	// Tek boyutlu dizinin elemanlarını 2 boyutlu diziye(matrise) aktar
	k=0;
	
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			a[i][j]=b[k];
			k++;
		}
	}

	// Sıralanmış matrisi ekrana yazdır
	/*
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
			printf(" %d", a[i][j]);
	}
	*/
	
	// Ortalamayı hesapla
	for(i=0; i<m; i++)
	{
		for(j=0; j<n; j++)
		{
			toplam+=a[i][j];
		}
	}
	
	ortalama=(float)toplam/(m*n);
	
	printf("\n Matrisin en buyuk elemani: %d", a[m-1][n-1]);
	printf("\n Matrisin en kucuk elemani: %d", a[0][0]);
	printf("\n Ortalama: %0.2f", ortalama);
}
