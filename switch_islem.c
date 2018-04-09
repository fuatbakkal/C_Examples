#include <stdio.h>
#include <conio.h>
#include <locale.h>

/* 
#include <ctype.h>
if(isdigit(sayi))
*/

int main()
{
	setlocale(LC_ALL,"Turkish");
	float sayi_1, sayi_2;
	char islem, devam_et;

	do // Alttaki işleme önce bir kere yap. Eğer devam_et değeri E ya da e olursa tekrar yap.
	{
	system("cls"); // Ekrani temizler
	printf("İlk sayiyi giriniz:\n");
	scanf("%f", &sayi_1);
	printf("\n\n");
	printf("İkinci sayiyi giriniz:\n");
	scanf("%f", &sayi_2);
	printf("\n\n");

	printf("İŞLEMLER\n----------\n1: Toplama\n2: Çıkarma\n3: Çarpma\n4: Bölme\n\n");

	do 	// Hatalı seçim yapılırsa tekrar işlemi iste.
	{
	printf("İşlemi seçiniz: ");
	islem=getch();
	printf("\n\n");

	switch(islem)
		{
   		case '1':
	   	printf("İşlem: %.2f + %.2f = %.2f\n\n", sayi_1, sayi_2, sayi_1+sayi_2);
	   	break;

   		case '2':
	   	printf("İşlem: %.2f - %.2f = %.2f\n\n", sayi_1, sayi_2, sayi_1-sayi_2);
	   	break;

   		case '3':
	   	printf("İşlem: %.2f * %.2f = %.2f\n\n", sayi_1, sayi_2, sayi_1*sayi_2);
	   	break;

   		case '4':
	 	printf("İşlem: %.2f / %.2f = %.2f\n\n", sayi_1, sayi_2, sayi_1/sayi_2);
	   	break;

		default:
		printf("Hatalı Giriş!\n\a");
		}

	} while (islem !='1' && islem !='2' && islem !='3' && islem !='4');
	
		// Yeni işlem mi yoksa çıkış mı?
		do
		{
		printf("Yeni bir işlem yapmak istiyor musunuz?[E/H]\n\n");
		devam_et=getch();
		
		// Hatalı giriş yapılırsa uyar
		if (devam_et != 'E' && devam_et != 'e' && devam_et != 'H' && devam_et != 'h')
		{
			printf("\nHatalı Giriş!\n\a");
		}
		
		} while (devam_et != 'E' && devam_et != 'e' && devam_et != 'H' && devam_et != 'h');
	
	} while(devam_et == 'E' || devam_et == 'e');

	// Döngü devam etmiyor ise çık
	return 0;

}
