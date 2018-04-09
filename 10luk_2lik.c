#include <stdio.h>
#include <conio.h>

int main(void)
{
	int sayi, sayac=0, i;

	int ikilik[100];

    printf("10'luk Tabaninda Sayi Giriniz : ");
	scanf("%d", &sayi);

    while (sayi>0)
    {
		sayac++;
        ikilik[sayac]= sayi % 2;
        sayi = sayi / 2;
    }

	for(i=sayac;i>0;i--)
		printf("%d", ikilik[i]);

	getch();
	return 0;
}
