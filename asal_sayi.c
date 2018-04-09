#include<stdio.h>

int main (void)
{
	int a,b=2;
	
	printf("Bir sayi giriniz: ");
	
	scanf("%d",&a);
	
	while(a>=b)
	{
		
		if(a==b)
		{
		printf("\nGirdiginiz sayi asaldir.");
		b++;
		}
		
		else
		{   switch(a%b)
		
		   {case 0:printf("\nGirdiginiz sayi asal degildir.");
			b=a+1;break;
			default:b++;}
		
		}
	}
	
	getch();
	return 0;
}
