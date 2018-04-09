#include <stdio.h>

void kutuciz(int a,int b)
{
    unsigned int i, j;

	// Satırlar
	for(j=1; j<=a; j++)
	{
		// Sütunlar
		for(i=1; i<=b; i++)
		{
			printf("X"); //Kullanılacak karakter
		}

		printf("\n"); //Her bir satır arasındaki boşluk
	}
}

int main()
{
	int satir, sutun;

	printf("Satir sayisini gir: ");
	scanf("%d",&satir);

	printf("Sutun sayisini gir: ");
	scanf("%d",&sutun);

	printf("\n");
	kutuciz(satir,sutun);

	return 0;
}
