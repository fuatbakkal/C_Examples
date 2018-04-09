#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main()
{
	system("Color 1a"); //Renklendirme
	
	srand((unsigned)time(NULL)); //Zamana göre random fonksiyonunu değiştirir
	
	unsigned i,boyut,toplam; //Pozitif sayaç değişkeni
	
	boyut=296;
	
	float yuzde;
	
	unsigned zar1[boyut],zar2[boyut];
	
	printf("  Sira\t1.Zar\t2.Zar\tToplam\tYuzde\n"); // Tablo başlıkları
	
	for(i=1; i<=boyut; i++)
	{
		zar1[i]=rand()%6+1; //Zardaki sayılar: üst limit 6 alt limit 1
		zar2[i]=rand()%6+1;
		
		toplam=zar1[i]+zar2[i];
		yuzde=((float)toplam/boyut)*100.0;
		
		printf("%5u\t%4u\t%4u\t%4u\t%5.2f\n",i,zar1[i],zar2[i],toplam,yuzde);
	}
	
	getch();
	return 0;
}
