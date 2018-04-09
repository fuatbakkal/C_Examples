#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[])
{

	int i;
	float toplam=0.0, ortalama=0.0;

	if(argc<3)
	{
		printf("\n En az iki tane parametre girmelisiniz\n");
		return 0;
	}

	for(i=1; i<argc; i++)
		printf("\n Sayi %d: %d", i, atoi(argv[i]));

	for(i=1; i<argc; i++)
		toplam+=atoi(argv[i]);

	ortalama=(float)toplam/(argc-1);

	printf("\n Ortalama: %2.2f\n", ortalama);

	getch();
	return 0;
}
