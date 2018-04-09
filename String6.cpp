#include<stdio.h>
#include<string.h> //strcmp() strncmp fonk. kullanabilmemiz için gerekli kütüphane
#include<conio.h>
//strcmp(  ) fonksiyonu, kendisine verilen iki katarı birbiriyle karşılaştırır.         Dönen Değer     	Açıklama
//                                                                                      --------------------------------------
//                                                                                        < 0	            Katar1, Katar2'den küçüktür. 
//                                                                                          0	            Katar1 ve Katar2 birbirine eşittir. 
//                                                                                        > 0	            Katar1, Katar2'den büyüktür. 
// Katarlar birbirine eşitse, geriye 0 döner.
// Eğer ilk katar alfabetik olarak ikinciden büyükse, geriye pozitif değer döndürür.
// Şayet alfabetik sırada ikinci katar birinciden büyükse, geriye negatif değer dönmektedir.



//strncmp(  ) için de aynı kurallar geçerlidir.
// Tek fark, karşılatırılacak karakter sayısını girmemizdir. 
//strcmp(  ) fonksiyonunda iki katar, null karakter işareti çıkana kadar karşılaştırılır.
//Fakat strncmp(  ) fonksiyonunda, başlangıçtan itibaren kaç karakterin karşılaştırılacağına siz karar verirsiniz.


int main( void )
{
	int sonuc;
	char ilk_katar[40]="Maymun";
	char ikinci_katar[40]="Maytap";//Maymun
	sonuc = strcmp( ilk_katar, ikinci_katar );
	printf( "%d\n", sonuc );
	sonuc = strncmp( ilk_katar, ikinci_katar, 3 );
	printf( "%d\n", sonuc );

    getch();
}
