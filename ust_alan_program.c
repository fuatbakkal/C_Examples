#include <stdio.h>

int main()
{
	int i;
	float taban,taban2,ust;
	
	printf("Tabani gir: ");
	scanf("%f", &taban);
	
	taban2=taban;
	
	printf("\nUstu gir: ");
	scanf("%f", &ust);
	
	if(ust<0)
	{
		for(i=-1; i>ust; i--)
		{
			taban=taban*taban2; // veya taban*=taban2;
		}
	
		printf("\nSonuc: 1/%d", (int)taban); // Bilimsel gösterim ^__^
	}
	
	else if(ust==0)
	{
		printf("\nSonuc: 1");
	}
	
	else
	{
	
		for(i=1; i<ust; i++)
		{
			taban=taban*taban2; // veya taban*=taban2;
		}
	
		printf("\nSonuc: %d", (int)taban);
	}
	
	getch();
	return 0;
}
