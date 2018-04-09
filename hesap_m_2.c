#include <stdio.h>
#include <conio.h>	//getch() için gerekli
#include <ctype.h> //toupper() için gerekli

int main()
{
	int a,b;
	char op,devam_et;
	
	do
	{
		printf("1. Sayiyi giriniz: "); scanf("%d",&a);
	
		do
		{
			printf("\nOparatorlerden birini giriniz(+,-,/,*): ");
			op=getch();
		
			if(op!='+' && op!='-' && op!='*' && op!='/')
				printf("\nHatali bir operator girdiniz!\n");

		} while(op!='+' && op!='-' && op!='*' && op!='/');
	
		printf("\n\n2.Sayiyi Giriniz: "); scanf("%d",&b);
		
		printf("\n");
		
		switch(op)
		{
			case '+': printf("Sonuc: %d",a+b); break;
			case '-': printf("Sonuc: %d",a-b); break;
			case '/': printf("Sonuc: %d",a/b); break;
			case '*': printf("Sonuc: %d",a*b); break;
			default: printf("Burasi hic gozukmeyecek cunku operatoru en basta kontrol ettik :))\n"); break;
		}

		// Yeni işlem mi yoksa çıkış mı?
		do
		{
		printf("\n\nYeni bir islem yapmak istiyor musunuz?[E/H]\n\n");
		devam_et=getch();
		devam_et=toupper(devam_et); // Girilen küçük harfi de büyük harf yapalım ki kontrol dögülerinde fazla karakter kullanmayalım
		
		// Hatalı giriş yapılırsa uyar
		if (devam_et != 'E' && devam_et != 'H')
			printf("\nHatali Giris!\n\a");
		
		} while (devam_et != 'E' && devam_et != 'H');
		
	} while(devam_et == 'E');
	return 0;
}
