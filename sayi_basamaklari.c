// 4 basamaklı bir sayının basamaklarını alt alta yazdıran program

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main () {
	int sayi,binler,yuzler,onlar,birler,basamaksayisi=0;

	printf("Dort basamakli sayi gir:\n");
	scanf("%d", &sayi);

	if(sayi>=1000 && sayi<=9999) {

		binler=sayi/1000; // 1234/1000 = 1
		sayi=sayi-(binler*1000); // 1234-1000 = 234
		yuzler=sayi/100; // 234/100 = 2
		sayi=sayi-(yuzler*100); // 234-200 = 34
		onlar=sayi/10; // 34/10 = 3
		sayi=sayi-(onlar*10); // 34-30 = 4
		birler=sayi;

		printf("\n%d\n%d\n%d\n%d\n", binler,yuzler,onlar,birler);
		getch();

	}

	else {

		printf("\n Sayi en fazla 4 basamakli olmali!\n");
		getch();
	}

}
