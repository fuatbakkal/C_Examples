#include <stdio.h>
#include <conio.h>
 
int main()
{ 
    int x[5],i,j,temp;

    for(i=0;i<5;i++)
    {
        if(i<4)
        {
            printf("%d. sayiyi girin:", i+1);
            scanf("%d", &x[i]);
        }
        else
        {
            printf("Son sayiyi girin:", i+1);
            scanf("%d", &x[i]);
        }
    }
    printf("\nDizinin sirasiz hali:\n");
    for(i=0;i<5;i++)
        printf("%d ",x[i]);
        
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            if(x[j]>x[j+1]) // < yazılırsa büyükten küçüğe sıralar
            {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
    printf("\n\nDizinin sirali hali:\n");
    for(i=0;i<5;i++)
        printf("%d ",x[i]);
    getch();
    return 0;
}
