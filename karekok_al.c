#include <stdio.h>

int main(void){
	
	int sayi,i;
	double x=1.0;
	
	printf("Sayi gir: ");
	scanf("%d",&sayi);

	for(i=0; i<=sayi+20; i++) //Virgulden sonraki basamaklar için 20 değeri arttırılabilir.(0'ın karekökü baz alınarak)
	{
		x=(sayi/x+x)/2;
	}
	
	printf("\n\t%d sayisinin karekoku: %f",sayi,x);
	
	getch();
	return 0;
}
