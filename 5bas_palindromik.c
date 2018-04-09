#include <stdio.h>
#include <conio.h>

int main ()
{

		int sayi,sayi2,onbinler,binler,yuzler,onlar,birler;

		printf("5 basamakli sayi giriniz: ");
		scanf("%d", &sayi);
		printf("\n");

		sayi2=sayi; // Girdigin sayi surekli 10'a bolunup modunu alinca degisecek bu yuzden ilk sayiyi baska bir degere daha atadim.

		birler=sayi%10;
		sayi=sayi/10;
		onlar=sayi%10;
		sayi=sayi/10;
		yuzler=sayi%10;
		sayi=sayi/10;
		binler=sayi%10;
		sayi=sayi/10;
		onbinler=sayi%10;

/*	Basamaklari alt alta yazdirir

		printf("%d\n%d\n%d\n%d\n%d\n\n", onbinler,binler,yuzler,onlar,birler);
*/

		if (onbinler==birler && binler==onlar)
		{
			printf("Girdiginiz %d sayisi palindromiktir.\n", sayi2);
		}

		else
		{
			printf("Girdiginiz %d sayisi palindromik degildir.\n", sayi2);
		}

		getch();
		return 0;
}
