#include <stdio.h>

int main(void)
{
	int toplam=0;

	printf("Sonuz toplam(pozitif sayilar icin)\n--------------------------\n");

	// 1'e sürekli 1 ekler
	for(;;)
	{
		toplam=toplam+1;
		printf("%d\n", toplam);
	}

	return 0;
}
