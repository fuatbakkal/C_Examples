#include<stdio.h>
#include<conio.h>

int main(void)
{
	char k;
	int sayac=0;
	
	printf("Karakterleri girin ve sonlandirmak icin \"Enter\" tusuna basin.\n\n");
	
	while((int)k!=13)
	{
		sayac=sayac+1;
		printf("Karakter gir: ");
		k=getch();
		printf("\n");
	}
	
	printf("\n\t%d tane karakter girdin.",sayac-1);
	
	getch();
	return 0;
}
