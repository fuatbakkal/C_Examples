#include <stdio.h>
#include <conio.h>

int main(){

	int i=0,sayi=0,sayi2=0,miktar; 
	
	printf("Kac sayi gireceksiniz? ");
	scanf("%d", &miktar);

	while (i < miktar){
		printf("Sayi girin: ");
		scanf("%d",&sayi);

		if (sayi > sayi2){
			sayi2 = sayi;
		}

	i++;
	}
	
	
	
	printf("Girdiginiz sayilardan en buyugu: %d", sayi2);

	getch();
	return 0;
}
