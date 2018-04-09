#include <stdio.h>
#include <conio.h>
#include <string.h>//strcmp() ve strcpy() fonksiyonu için
// sizeof(dizi)/sizeof(dizi[0]) dizinin kaç terimli olduğunu verir.

int main()
{
    char dizi[][20]={"burak","fuat","arda","caner","ali","osman","ordu","zeynep"};
    char temp[20];
    for(int i=1;i<(sizeof(dizi)/sizeof(dizi[0]));i++){
            for(int j=0;j<sizeof(dizi)/sizeof(dizi[0])-i;j++){
                    if(strcmp(dizi[j],dizi[j+1])>0){
                             strcpy(temp,dizi[j]);
                             strcpy(dizi[j],dizi[j+1]);
                             strcpy(dizi[j+1],temp);                
                    }
            }
    }
    for(int i=0;i<sizeof(dizi)/sizeof(dizi[0]);i++)
           printf("%s\n",dizi[i]);
    getch();
    return 0;
}
