#include<stdio.h>

int main()
	{
	int saniye,saat,dakika,artansaniye;
	
	printf("Saniye Değerini Giriniz :");
	scanf("%d",&saniye);
	saat = saniye / 3600; // saat değerini hesaplatıyoruz
	dakika=(saniye-(saat * 3600))/60; // dakikayı hesaplatıyoruz
	saniye=saniye-(saat*3600)-(dakika*60); // saat ve dakika bulunduktan geriye kalan saniyeyi buluyoruz.
 
	printf("%d saat , %d dakika ve %d saniye",saat,dakika,saniye);    // değerlerimizi ekrana basıyoruz
 
	getch();
	return 0;
 
	}
