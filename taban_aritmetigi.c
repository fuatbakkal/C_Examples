#include <stdio.h>
#include <string.h>
#include <conio.h>

// 2 tabanındaki sayiyi 10 luk tabana çeviren program

void main(void)
{

char iki[100];
int kat,s,i,on,kont;

printf("ikilik Sistemdeki Sayı..:");
scanf("%s",iki);
kat=1;
on=0;
i=strlen(iki)-1;
kont=1;
while((i>=0)&&(kont==1))
{
if(iki[i]=='1')
{
on=on+kat;
}
else
{
if(iki[i]!='0') kont=0;
}
kat=kat*2;
i=i-1;
}
if(kont==1) printf("Onluk Sistemdeki Karşılığı..:%d",on);
else printf("Say? ikilik sistemde de§il");

getch();
return 0;

}
