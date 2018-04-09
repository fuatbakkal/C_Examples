#include <stdio.h>
#include <conio.h>

int main()
{
	unsigned i, ts;
	float tt, ct, bt, toplam=0.0;
	
	printf(" Kac terim icin hesaplansin?: ");
	scanf("%u", &ts);
	
	printf("\n");
	
	for(i=1; i<=ts; i++)
	{
		tt=0.0; ct=0.0; bt=0.0; //Her döngü başında sıfırlanmaları gerekir.

		if(i%2!=0)
			tt=(float)4/(2*i-1);
			
		if(i%2==0)
			ct=(float)-4/(2*i-1);

		bt=(tt+ct);
		toplam+=bt;
		
		printf(" %3u tane terim icin pi sayisi = %.3f\n", i, toplam);
	}
	
	getch();
	return 0;
}
