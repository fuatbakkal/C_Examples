#include<stdio.h>
#include<conio.h>

int prime(int n)
{
    static int i=1;
    static int sayac=0;
    
    while(i<=n)
    {
    	if(n%i==0)
			sayac++;
			
         i++;
         prime(n);
    }
    
	if(sayac==2)
    	return 1;
    	
    else
    	return 0;
}

int main()
{
    int p;
    printf("Kontrol etmek istediðiniz sayiyi girin : ");
    scanf("%d",&p);
    int l=prime(p);                                      //function returns the value and puts in 'l' variable
    if(l==1)                                            //conditions
    printf("%d asaldir ", p);
    else
    printf("%d asal degildir ", p);
    getch();
    return 0;
}
