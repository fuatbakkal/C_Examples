#include <stdio.h>

int main()
{
	int sayi,sayi2,basamaksayisi=0,i,basamak;

	printf("Sayi gir: ");
	scanf("%d", &sayi);

	sayi2=sayi;

	printf("\n");

	// Sayinin kac basamakli oldugunu bulur.
	while(sayi>0)
	{
  		basamaksayisi++;
		sayi/=10;
	}

	printf("Gidiginiz sayi %d basamaklidir.\n\n", basamaksayisi);

	// Sayinin once modunu alir sonra ona böler ve bu islemi basamksayisi boyunca devam eder. Ornegin 4 basamkli bir sayi icin 4 kez yapar.
	for(i=1; i<=basamaksayisi; i++)
	{

		basamak=sayi2%10;
		sayi2=sayi2/10;
		
		printf("%d", basamak);
	}
	
	printf("\n");
	getch();
	return 0;
}
