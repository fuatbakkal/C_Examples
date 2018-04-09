#include <stdio.h>
#include <conio.h>

void kareleri(int a[], int n)
{
	int i;

	for(i=0; i<n; i++)
	{
		a[i]=a[i]*a[i];
	}
	
}

int main(void)
{
	int satir, sutun, i, j;
	
	printf("\n Satir sayisini girin: ");
	scanf("%d", &satir);
	
	printf(" Sutun sayisini girin: ");
	scanf("%d", &sutun);
	
	int dizi[satir*sutun];
	
	for(i=0; i<satir*sutun; i++)
	{
		dizi[i]=i+2;
	}
	
	printf("\n Dizi elemanlar: \n");
	for(i=0; i<satir*sutun; i++)
	{
		printf(" %d", dizi[i]);
	}
	
	kareleri(dizi, satir*sutun);
	
	printf("\n\n Fonksiyon sonrasi: \n");
	for(i=0; i<satir*sutun; i++)
	{
		printf(" %d", dizi[i]);
	}
	
	getch();
	return 0;
}
