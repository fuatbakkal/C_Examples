#include <stdio.h>
#include <conio.h>

int main(void)
{
	int x=0, y=1, sayi, i, degisken;
	
	printf("Kac tane istiyorsunuz? ");
	scanf("%d",&sayi);

	printf("%d  ",x);
	printf("%d  ",y);

	for(i=0;i<sayi-2;++i)
    {
    	printf("%d  ",x+y);
        degisken=x;
        x=y;
        y=degisken+y;
    }

	getch();
    return 0;
}
