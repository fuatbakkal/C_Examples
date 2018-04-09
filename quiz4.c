#include <stdio.h>
#include <conio.h>

int main(void)
{
	int not1,not2,ortalama;
	
	printf("1. sinav notunu gir: ");
	scanf("%d",&not1);
	
	printf("2. sinav notunu gir: ");
	scanf("%d",&not2);
	
	ortalama=(not1+not2)/2;
	
	printf("\n\tOrtalamaniz: %d\n",ortalama);
	
	switch(ortalama)
	{
		case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79:
		printf("\tC belgesini aldiniz."); break;
		
		case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89:
		printf("\tB belgesini aldiniz."); break;
		
		case 90: case 91: case 92: case 93: case 94: case 95: case 96: case 97: case 98: case 99: case 100:
		printf("\tA belgesini aldiniz."); break;
		
		default: printf("\tBelge alamadiniz!");
	}
	
	getch();
	return 0;
}
