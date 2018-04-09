#include <stdio.h>
#include <conio.h>

int faktor (int);
int kombi(int,int);
void paskal (int *,int,int);

int main()
{
int satir,sonuc,i,j,k,eleman;

printf("Satir sayisini girin :");
scanf("%d",&satir);


printf("\n\n");
for(i=0;i<satir;i++)
{
printf("\t\t");
for(k=0;k<satir-i;k++)
printf(" ");

for(j=0;j<=i;j++)
{
paskal(&sonuc,i,j);
printf("%d ",sonuc);
}
printf("\n");
}
eleman=satir*(satir+1)/2;
printf("\n\nEleman sayisi=%d",eleman);




getch();
return 0;

}
int faktor (int a)
{
int i,sonuc=1;

if(a==1 || a==0)
return 1;

else
{
for(i=1;i<=a;i++)
sonuc*=i;
}

return sonuc;


}
int kombi(int b,int c)
{
int sonuc;

sonuc=faktor(b)/(faktor(b-c)*faktor(c));


}
void paskal (int *x,int y,int z)
{
*x=kombi(y,z); 

}
