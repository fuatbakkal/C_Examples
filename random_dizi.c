#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	system("Color 1a"); //Renklendirme
	
	srand((unsigned)time(NULL)); //Zamana göre random fonksiyonunu değiştirir
	
	unsigned boyut,i; //Pozitif değişkenler
	
	printf("Dizinin boyutunu gir: ");
	scanf("%u",&boyut);
	
	int dizi[boyut];
	
	printf("\n\tSAYI DIZISI:\n\t");
	
	for(i=1; i<=boyut; i++)
	{
		dizi[i]=rand()%100;
		printf("%d ",dizi[i]);
	}
	
	// Random sayılardan oluşturduğumuz dizi sayılarının ascii karşılıklarını yazar
	char c;

	printf("\n\n\tKARAKTER DIZISI:\n\t");
	
	for(i=1; i<=boyut; i++)
	{
		c=dizi[i];
		printf("%c  ",c);
	}
	
	printf("\n\n");
	
	system("PAUSE");
	return 0;
}
