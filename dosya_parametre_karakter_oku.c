// Adı komut satırından girilen dosyanın içindekileri karakter karakter ekrana basan program

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argsay, char *argdeg[])
{
	FILE *di;
	char kr;
	
	if(argsay < 2)
	{
		printf(" Dosya adini girmediniz!\n");
		return 1;
	}
	
	if((di=fopen(argdeg[1], "r"))==NULL)
	{
		printf(" Dosya acilamadi!\n");
		return 2;
	}
	
	// Karakter karakter ekrana yaz.
	// Dosyanın sonuna gelindiğinde feof 1 değerini gönderir.
	while(!feof(di))
	{
		kr=getc(di);
		putchar(kr);
	}
	
	fclose(di);
	return 0;
}
