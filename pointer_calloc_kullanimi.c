#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
	int ogr_say, i, toplam=0;
	
	int *sinifptr;
	
	float ortalama;
	
	printf("\n Ogrenci sayisini girin: ");
	scanf("%d", &ogr_say);
	
	sinifptr=(int *)calloc(ogr_say, sizeof(int));
	
	printf("\n Notlari girin\n -------------\n");
	
	for(i=0; i<ogr_say; i++)
	{
		printf(" %d. not: ", i+1);
		scanf("%d", &sinifptr[i]);
		toplam+=*(sinifptr+i); // veya toplam+=&sinifptr[i];
	}
	
	ortalama=(float)toplam/ogr_say;
	
	printf("\n Ortalama: %2.2f", ortalama);
	
	free(sinifptr);
	
	getch();
	return 0;
}
