#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

/*
Konu:
*srand ile 3 basamaklı sayı üret
*Sayı mükemmel sayı ise ekrana yazdır
*Mukemmel sayılar: 4,28,496
*/

int main()
{
    int TamBolenTop=0,Sayi,j,i;
    srand(time(0)); // Program her çalıştığında random farklı değerle başlar.

    for(i=1;i<=2000;i++)
    {
        Sayi=rand()%900+100; // [1,999] aralığında rastgele sayı üretiliyor
        TamBolenTop=0;        // Üretilen Her Sayi için 0'dan başlamalı

        //Rastgele Uretilen Sayının Tam Bölenleri Toplamı Bulunuyor
        for(j=1;j<Sayi;j++)
            if (Sayi%j==0)
                TamBolenTop+=j;

        //Mükemmel Sayı Eşitliği Kontrol Ediliyor
        if (i==1) printf(" 3 BASAMAKLI MUKEMMEL SAYILAR  \n");
        if (TamBolenTop==Sayi)
            printf("%d\n",Sayi);
    }

    getch();
    return 0;
}
