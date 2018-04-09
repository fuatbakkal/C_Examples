#include<stdio.h>
#include<conio.h>

main()
{

int a,girisbosluk=1,arabosluk,i,j,k;

scanf("%d",&a);

arabosluk=2*a;

for (i=1; i<=a; i++)
{
for (j=1; j<=girisbosluk; j++)
printf(" ");

printf("*");

for(k=1; k<=arabosluk; k++)
printf(" ");

printf("*\n");

girisbosluk++;
arabosluk-=2;

}
for (i=0; i<=a; i++)
{
for (j=1; j<=girisbosluk; j++)
printf(" ");

printf("*");

for(k=1; k<=arabosluk; k++)
printf(" ");

printf("*\n");

girisbosluk--;
arabosluk+=2;

}

getch();
}
