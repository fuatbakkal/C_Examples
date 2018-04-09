#include <stdio.h>
#include <conio.h>
#include <math.h>

int asal_mi(int);

int main(void)
{
	int i, n=36, m;
	
	for(i=1; i<=n; i++)
	{
		if(asal_mi(i)==1)
		{
			m=(int)pow(2,i)-1;
			printf("%d\n", m);
		}
	}
		
	getch();
	return 0;
}

int asal_mi(int x)
{
	int i,j=0;
	
	for(i=1; i<=x; i++)
	{
		if(x%i==0)
			j++;
	}
	
	if(j==2)
		return 1;
		
	else
		return 0;
}
