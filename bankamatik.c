#include<stdio.h>

int main(void)
{

	int ikiyuz,yuz,elli,yirmi,on,para;

	printf("Cekilecek para miktarini giriniz: ");
	scanf("%d",&para);

	ikiyuz=para/200;
	para=para-(ikiyuz*200);
	yuz=para/100;
	para=para-(yuz*100);
	elli=para/50;
	para=para-(elli*50);
	yirmi=(para/20);
	para=para-(yirmi*20);
	on=(para/10);
	para=para-(on*10);

	printf("\nIkiyuzluk: %d tane\nYuzluk: %d tane\nEllilik: %d tane\nYirmilik: %d tane\nOnluk: %d tane\n\n\tKalan TL: %d\n",ikiyuz,yuz,elli,yirmi,on,para);

	getch();
	return 0;

}
