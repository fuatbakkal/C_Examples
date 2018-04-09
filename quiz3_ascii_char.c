#include <stdio.h>
#include <conio.h> //getch(); için gerekli
 
int main(void)
{
        char ilk,iki,uc;
        int a,b,c;
       
        // scanf yerine getch kullandım ki satıra sadece bir karakter girilebilsin
        printf("Ilk karakteri gir: ");
        ilk=getch();
       
        printf("\nIkinci karakteri gir: ");
        iki=getch();   
       
        printf("\nUcuncu karakteri gir: ");
        uc=getch();
       
        // a,b,c değişkenlerine girilen karakterlerin ascii kodlarını atar
        a=ilk;
        b=iki;
        c=uc;
       
        printf("\n\n\t");  // Sonuçlar biraz ortaya yazılsın
       
        // 13 tane eşitsizlik durumu
        // a=b=c
        if(a==b && a==b && b==c)
        {
                printf("%d=%d=%d",a,b,c);
        }
       
        // a=b>c
        if(a==b && a>c && b>c)
        {
                printf("%d=%d>%d",a,b,c);
        }
       
        // c>a=b
        if(a==b && c>a && c>b)
        {
                printf("%d>%d=%d",c,b,a);
        }
       
        // b=c>a
        if(b==c && b>a && c>a)
        {
                printf("%d=%d>%d",b,c,a);
        }
       
        // a>b=c
        if(b==c && a>b && a>c)
        {
                printf("%d>%d=%d",a,b,c);
        }
       
        // a=c>b
        if(a==c && a>b && c>b)
        {
                printf("%d=%d>%d",a,c,b);
        }
       
        // b>a=c
        if(a==c && b>a && b>c)
        {
                printf("%d>%d=%d",b,a,c);
        }
       
        // a>b>c
        if(a>b && b>c && a>b)
        {
                printf("%d>%d>%d",a,b,c);
        }
       
        // a>c>b
        if(a>b && c>b && a>c)
        {
                printf("%d>%d>%d",a,c,b);
        }
       
        // b>a>c
        if(b>a && a>c && b>c)
        {
                printf("%d>%d>%d",b,a,c);
        }
       
        // b>c>a
        if(b>a && c>a && b>c)
        {
                printf("%d>%d>%d",b,c,a);
        }
       
        // c>b>a
        if(c>b && b>a && c>a)
        {
                printf("%d>%d>%d",c,b,a);
        }
       
        // c>a>b
        if(c>b && a>b && c>a)
        {
                printf("%d>%d>%d",c,a,b);
        }
       
        getch(); // Çıkış için karakter girişi bekle
        return 0; // Programı 0 koduyla sanlandır
}
