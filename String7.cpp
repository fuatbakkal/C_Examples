#include<stdio.h>
#include<string.h>
#include<conio.h>
int main( void )
{
    printf( "strcpy( kopya, kaynak )\n" );
	char kaynak[40]="Merhaba Dunya";
	char kopya[30] = "";
	strcpy( kopya, kaynak );
	printf( "%s\n", kopya );

       printf( "strncpy( kopya2, kaynak2, 9 )\n" );
    char kaynak2[40]="Merhaba Dünya";
	char kopya2[30] = "";
	strncpy( kopya2, kaynak2, 9 );
	printf( "%s\n", kopya2 );

    getch();
}
