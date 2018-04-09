// Rastgele oluşturulan 10 elemanlı bir dizinin elamanlarının karesi ile ikinci bir dizi oluşturur ve iki diziyi de ekrana yazar.
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
#include <math.h>

int main()
{
	system("Color 1a"); //Renklendirme
	
	srand(time(NULL)); //Zamana göre random fonksiyonunu değiştirir
	
	unsigned boyut=10,i; //Pozitif değişkenler
	
	int dizi1[boyut],dizi2[boyut]; // Int tipindeki diziler
	
	printf("\n\t1. Dizi: ");

	for(i=1; i<=boyut; i++)
	{
		dizi1[i]=rand()%100; // Dizi elemanları 1 ile 100 arasındaki sayılardan oluşur
		dizi2[i]=pow(dizi1[i],2);
		
		printf("%d ",dizi1[i]);
	}

	printf("\n\n\t2. Dizi: ");

	for(i=1; i<=boyut; i++)
	{
		
		printf("%d ",dizi2[i]);
	}

	printf("\n\n");
	
	system("PAUSE");
	return 0;
}
