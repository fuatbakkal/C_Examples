#include<stdio.h>

void sayilariYaz(int sayi)
{
	int i;
    for(i = 1; i <= sayi; ++i)
        printf("%d ", i);
    printf("\n");

    if(sayi == 1)
        return;

    sayilariYaz(sayi - 1);

}

int main()
{
    sayilariYaz(7);
    return 0;
}
