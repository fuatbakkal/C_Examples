#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>

#define temizle system("cls")

/* Kabarcık Sıralama */


void Sirala(int dizi[])
{
    int j,Kontrol=0;
    int i,temp,sayac=1;

    /* kontrol=1 ise siralama tamamlanmıştır, 0 ise hala siralanmayan elemanlar olabilir*/
    while (Kontrol==0)
    {
        Kontrol=1;
        for (i=0;i<9;i++) // i+1=son eleman olacağından 9 defa döner
        {
            if (dizi[i]>dizi[i+1]) // i'ninci eleman (i+1). den büyükse yer değiştirir
            {
                temp=dizi[i];
                dizi[i]=dizi[i+1];
                dizi[i+1]=temp;
                Kontrol=0;
            }
        }

        printf("\n%d. iterasyon: ",sayac++);
        for (i=0;i<10;i++)
            printf("%2d ",dizi[i]);

    }
}


int main()
{
    int dizi[10],i;

    /*Dizinin Elemanlarının Girilmesi*/
    for (i=0;i<10;i++)
    {
       printf("%d. Sayiyi Giriniz: ",i+1);
        scanf("%d",&dizi[i]);
    }

    temizle;
    printf("Elemanlar:    ");
    for (i=0;i<10;i++)
        printf("%2d ",dizi[i]);
    printf("\n");
    Sirala(dizi);

    printf("\n\n");


    getch();
    return 0;
}
