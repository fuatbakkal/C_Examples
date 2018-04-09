#include <stdio.h>
#include <conio.h>
#include <windows.h>

void git(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void ciz(int x, int y, char renk, int boyut)
{
     HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );
      WORD wOldColorAttrs;
      CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
      GetConsoleScreenBufferInfo(h, &csbiInfo);
      wOldColorAttrs = csbiInfo.wAttributes;

     int i, satir;

	//Ekranda farklı renkler kullanmak için gerekli kodlar...     
     if(renk=='k')
     	SetConsoleTextAttribute ( h, FOREGROUND_RED | FOREGROUND_INTENSITY );
     	
     else if(renk=='y')
     	SetConsoleTextAttribute ( h, FOREGROUND_GREEN | FOREGROUND_INTENSITY );
     	
     else if(renk=='m')
     	SetConsoleTextAttribute ( h, FOREGROUND_BLUE | FOREGROUND_INTENSITY );

     //üçgeni çizdiriyoruz
     for(satir=1;satir<boyut;satir++)
     {
         git(x,y+satir-1);
         
         for(i=satir; i<boyut-1; i++)
             printf(" ");
             
         for(i=0; i<satir*2-1; i++)
			printf("%c",219);

		printf("\n");
	}
}

int main(void)
{
	ciz(10,10,'k',30);//10,10 koordinatında kırmızı renkte 30 satır uzunluğunda üçgen
      
	getch();
	return 0;
}

