#include <stdio.h>
#include <ctype.h> //toupper fonk.
#include <conio.h>

#define Temizle system("cls");

int OnlukTabanaCevir(int,int);
int Kontrol(int,int); // 0 > Yanlış   / 1 > Doğru
int IstenilenTabanaCevir(int,int);
int UsAl(int,int);

void main()
{
    int ilkTaban,Sayi,sonTaban,Sonuc,OnlukTaban;
    char Karar;

    Temizle;

    do
    {
        printf("Kac Tabaninda Sayi Gireceksiniz? ");
        scanf("%d",&ilkTaban);
        if (ilkTaban>10)
        {
            Temizle;
            printf("Taban 10'dan Buyuk Olamaz!! \n");
        }
    }
    while (ilkTaban>10);

    Temizle;

    do
    {
        printf("%d Tabaninda Bir Sayi Giriniz: ",ilkTaban);
        scanf("%d",&Sayi);


        if (Kontrol(ilkTaban,Sayi)==0)
        {
            Temizle;
            printf("Girdiginiz Sayinin Rakamlari Tabandan Kucuk Olmalidir!\n");
        }
    }
    while (Kontrol(ilkTaban,Sayi)==0);

    printf("Sayiyi Kac Tabanina Cevirmek Istiyorsunuz? ");
    scanf("%d",&sonTaban);

    OnlukTaban=OnlukTabanaCevir(ilkTaban,Sayi);

    Sonuc=IstenilenTabanaCevir(sonTaban,OnlukTaban);

    Temizle;

    printf("\n\nSayinin On Tabaninda Karsiligi: %d\n\n",OnlukTaban);
    printf("%d Tabanindaki %d Sayisinin %d Tabaninda Karsiligi: %d",ilkTaban,Sayi,sonTaban,Sonuc);

    printf("\n\nYeni Bir Sayi Girmek Istiyor musunuz? ( E / H )");
    do
    {
        Karar=toupper(getch());
    }while(Karar!='E'&&Karar!='H');

    if(Karar=='E') main();

    else
    {
        Temizle;
        printf("Program Kapatildi...");
    }

    getch();

}

int OnlukTabanaCevir(int ilkTaban,int Sayi)  // Gönderilen Sayının Onluk Tabandaki Karşılığını Döndürür
{
    int OnlukTabanda=0,Kuvvet=0;

    do
    {
        OnlukTabanda=OnlukTabanda + (Sayi%10)*UsAl(ilkTaban,Kuvvet);
        Sayi=Sayi/10;
        Kuvvet++;
    }
    while (Sayi>=1);

    return OnlukTabanda;
}

int IstenilenTabanaCevir(int sonTaban,int Sayi)
{
    int Basamak,Toplam=0,Us=1;

    while (Sayi>=1)
    {
        Basamak=Sayi%sonTaban;
        Sayi=Sayi/sonTaban;
        Toplam+=Basamak*Us;
        Us*=10;
    }

    return Toplam;
}

int Kontrol(int ilkTaban,int Sayi)
{
    while (Sayi>=1)
    {
        if ((Sayi%10)>=ilkTaban)
            return 0;
        Sayi=Sayi/10;
    }
    return 1;
}

int UsAl(int Taban,int Kuvvet)
{
    int Sonuc=1,i;

    for (i=1;i<=Kuvvet;i++)
        Sonuc=Sonuc*Taban;

    return Sonuc;
}
