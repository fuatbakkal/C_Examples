#include <stdio.h>
#include <math.h>
#include <conio.h>

float uzaklik(int, int, int, int, int);

int main(void)
{
	int a, b, c, x, y;
	float u;
	
	printf("ax+by+c denkleminin degerlerini giriniz\n---------------------------------------\n");
	printf("a degeri: ");
	scanf("%d", &a);
	
	printf("b degeri: ");
	scanf("%d", &b);
	
	printf("c degeri: ");
	scanf("%d", &c);
	
	printf("\nP(x,y) noktasinin degerlerini giriniz\n-------------------------------------\n");
	printf("x degeri: ");
	scanf("%d", &x);
	
	printf("y degeri: ");
	scanf("%d", &y);
	
	u=uzaklik(a,x,b,y,c);
	
	printf("\n\tUzaklik: %f", u);
	
	getch();
	return 0;
}

float uzaklik(int a, int x, int b, int y, int c)
{
	int pay;
	float payda, u;
	
	pay=a*x+b*y+c;
	payda=sqrt(pow(x,2)+pow(y,2));
	u=(float)pay/payda;
	
	if(pay>0)
		return u;
		
	if(pay<0)
		return -u;
		
	if(pay==0)
		return 0.0;
}
