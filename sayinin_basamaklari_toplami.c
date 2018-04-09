#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int x, y, t=0;
    
    printf("Bir Sayi Giriniz: ");
    scanf("%d", &x);
    
    while(x>0)
    {
        y=x%10;
        x=x/10;
        t+=y;
    }
    
	printf("Girilen Sayinin Rakamlari Toplami: %d\n",t);
    
    getch();
    return 0;
}
