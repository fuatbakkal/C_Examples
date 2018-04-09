#include <stdio.h>
#include <conio.h>

int acibul(int, int, int, int);

int main()
{
      int sa1,sa2,da1,da2;
   
      printf("1.Saati giriniz (ss dd)  ");
      scanf("%d%d",&sa1,&da1);
      
      printf("2.Saati giriniz (ss dd)  ");
      scanf("%d%d",&sa2,&da2);
      
      printf("derece=%d ",acibul(sa1,da1,sa2,da2));
    
      getch();
      return 0;
}

int acibul(int sa1,int da1,int sa2,int da2)
{
     int top1,top2,derece;
     top1=sa1*60+da1;// 1.saat dakikaya çevriliyor
     top2=sa2*60+da2;// 2. saat dakikaya çevriliyor
     
     if(top1>top2)
     	derece=(top1-top2)*6; //derece hesaplaması
     
     else
	 	derece=(top2-top1)*6;
     
     return derece;
}
