#include <stdio.h>

int main()
{
	unsigned int ogrenci_sayisi=0;
	float notu,ortalama;
	double toplam=0;

	printf("Not ortalamasi hesaplayan program.\nSonlandirmak icin en sondaki nota negatif deger girin!\n\n");

	printf("Notunuzu girin: ");
	scanf("%f", &notu);
	
	while(notu>=0)
	{	
		toplam+=notu;
		ogrenci_sayisi++;
		
		printf("Notunuzu girin: ");
		scanf("%f", &notu);

	} 
	
	if(ogrenci_sayisi != 0)
	{
	ortalama=toplam/ogrenci_sayisi;
	printf("\n\tOrtalamaniz: %.2f\n", ortalama);
	}
	
	else
	{
		printf("\nIslem sonlandirildi!\n");
		system("PAUSE");
		return 0;
	}
	
	system("PAUSE");
	return 0;
}
