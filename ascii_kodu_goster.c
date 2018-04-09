#include<stdio.h>
#include<conio.h>

int main(void)
{
	char k;
	int sayac=1;
	
	printf("Karakteri gir: ");
	k=getch();
	
	printf("\n\n");
	
	printf("Girdigin karakter \"%c\" ve ASCII kodu \"%d\" dir.\n",k,(int)k);
	
	getch();
	return 0;
}
