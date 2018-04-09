#include <stdio.h>
#include <locale.h>
#include <conio.h>

int kuvvet(int, int); //Int tipinde kuuvet alır
int kac_basamakli(int); //Girilen sayının kaç basamaklı olduğunu bulur
int onluk_tabana_cevir(int, int); //(Sayı, Girilen sayının tabanı) Girilen sayıyı 10luk tabana çevirir
int istenilen_tabana_cevir(int, int); //(10 tabanındaki sayı, çevirilecek taban) 10luk tabandaki sayıyı istenilen tabana çevirir
int kontrol(int, int); //(Sayı, Girilen sayının tabanı) Girilen sayının o tabana uygun bir sayı olup olmadığını kontrol eder

int main(void)
{
	setlocale(LC_ALL,"Turkish");
	
	int sayi, taban, kntrl, istenilen_taban, onluk_taban, istenilen_sayi;
	
	do
	{
		printf(" \n Çevirmek istediğiniz sayının tabanını girin: ");
		scanf("%d", &taban);
		
		if(taban>10)
			printf(" Taban 10'dan büyük olamaz!\n");
			
		if(taban<2)
			printf(" Taban 2'den küçük olamaz!\n");
			
	} while(taban>10 || taban<2);
	
	do
	{
		printf(" \n %d tabanındaki sayıyı girin: ", taban);
		scanf("%d", &sayi);
		
		kntrl=kontrol(sayi, taban);
		
		if(kntrl==0)
			printf(" %d sayısı %d tabanında değildir!\n", sayi, taban);
			
	} while(kntrl==0);
	
	do
	{
		printf(" \n Sayıyı çevirmek istediğiniz tabanı girin: ");
		scanf("%d", &istenilen_taban);
		
		if(istenilen_taban>10)
			printf(" Taban 10'dan büyük olamaz!\n");
			
		if(istenilen_taban<2)
			printf(" Taban 2'den küçük olamaz!\n");
			
	} while(istenilen_taban>10 || istenilen_taban<2);
	
	onluk_taban=onluk_tabana_cevir(sayi, taban);
	istenilen_sayi=istenilen_tabana_cevir(onluk_taban, istenilen_taban);
	
	printf("\n %d tabanındaki %d sayısının %d tabanındaki eşiti: %d", taban, sayi, istenilen_taban, istenilen_sayi);
	
	getch();
	return 0;
}

int kuvvet(int x, int y)
{
	int i, kuvvet=1;
	
	for(i=1; i<=y; i++)
		kuvvet*=x;
	
	return kuvvet;
}

int kac_basamakli(int x)
{
	int i=0;

	do
	{
		x/=10;
		i++;
	} while(x>0);
	
	return i;
}

int onluk_tabana_cevir(int sayi, int taban)
{
	int i, bs=kac_basamakli(sayi), bsd, toplam=0;
	
	for(i=0; i<bs; i++)
	{
		bsd=sayi%10;
		toplam+=bsd*kuvvet(taban, i);
		sayi/=10;
	}
	
	return toplam;
}

int istenilen_tabana_cevir(int sayi, int taban)
{
	int i, bs=kac_basamakli(sayi), bsd, toplam=0;
	
	for(i=0; sayi>0; i++)
	{
		bsd=(sayi%taban)*kuvvet(10,i);
		toplam+=bsd;
		sayi/=taban;
	}
	
	return toplam;
}

int kontrol(int sayi, int taban)
{
	int i, bs=kac_basamakli(sayi), bsd;
	
	for(i=1; i<=bs; i++)
	{
		bsd=sayi%10;
		
		if(bsd>=taban)
			return 0;
		
		sayi/=10;
	}
	
	return 1;
}
