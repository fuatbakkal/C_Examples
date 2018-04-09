#include <stdio.h>
#include <math.h>
int main()
{
    basadon:
    printf("\n---------------------------------- \n");
    printf("Hesap Makinesi Ornegi \n");
    printf("1-Topla 2-Cikar 3-Carp 4-Bol 5-Alan Hesaplari\n");;
    printf("---------------------------------- \n");
 float a;
 float b;
 float c;
 int secim ;
 printf("Secim Yapin :");
 scanf("%i",&secim) ;
 if(secim==1)
  {
printf("lutfen bir sayi giriniz.");
 scanf("%f",&a)   ;
 printf("lutfen bir sayi daha giriniz.");
 scanf("%f",&b) ;
      c = a+b;
      printf("Sonuc : %f",c);
  }
   if(secim==2)
  {
printf("lutfen bir sayi giriniz.");
 scanf("%f",&a)   ;
 printf("lutfen bir sayi daha giriniz.");
 scanf("%f",&b) ;
      c = a-b;
      printf("Sonuc : %f",c);
  }
   if(secim==3)
  {
printf("lutfen bir sayi giriniz.");
 scanf("%f",&a)   ;
 printf("lutfen bir sayi daha giriniz.");
 scanf("%f",&b) ;
      c = a*b;
      printf("Sonuc : %f",c);
  }
   if(secim==4)
  {
printf("lutfen bir sayi giriniz.");
 scanf("%f",&a)   ;
 printf("lutfen bir sayi daha giriniz.");
 scanf("%f",&b) ;
      c = a /b;
      printf("Sonuc : %f",c);
  }
     if(secim==5)
  {
      int secim2;
      float d;
      float e;
      float h;
      float f;
    printf("1-Karenin Alani 2- Dairenin Alani 3-Dikdorgenin Alani 4-Yamugun Alani 5-Ucgenin Alani");
    printf("Lutfen Bir Secim Yapiniz : ");
    scanf("%i",&secim2);
    if(secim2==1)
    {
        printf("Lutfen Kenar Uzunlugunu Giriniz :");
        scanf("%f",&d);
        f= d*d;
        printf("Alan = %f",f);
    }
       if(secim2==2)
    {
        printf("Lutfen Dairenin Yaricapini Giriniz :");
        scanf("%f",&d);
        f= 3*d*d;
        printf("Alan = %f",f);
    }
           if(secim2==3)
    {
        printf("Lutfen dikdortgenin kenar uzunlugunu Giriniz :");
        scanf("%f",&d);
        printf("Lutfen dikdortgenin kenar uzunlugunu daha Giriniz :");
        scanf("%f",&e);
        f= d * e;
        printf("Alan = %f",f);
    }
               if(secim2==4)
    {
        printf("Lutfen Yamugun Alt Tabani Giriniz:");
        scanf("%f",&d);
        printf("Lutfen Yamugun Ust Tabani Giriniz: ");
        scanf("%f",&e);
        printf("Lutfen Yamugun Yuksekligini Giriniz :");
        scanf("%f",&h);
 
        f= (d+e)*h/2;
        printf("Alan = %f",f);
    }
                   if(secim2==4)
    {
        printf("Lutfen Ucgenin Taban Alanini Giriniz:");
        scanf("%f",&d);
        printf("Lutfen Ucgenin Yuksekligini Giriniz :");
        scanf("%f",&h);
        f= d*h/2 ;
        printf("Alan = %f",f);
    }
  }
  goto basadon;
  getch();
  return 0;
 }  
