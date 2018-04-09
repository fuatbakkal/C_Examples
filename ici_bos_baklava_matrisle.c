#include <stdio.h>
#include <conio.h>

//Programın Mantığı : Matriste 1 görünen yerde yıldız, 0 görünen yerde boşluk yazdırır.
int main(void)
{
      int n, a, b, i, j;
      
      printf("Kare matrisin boyutunu giriniz : ");
      scanf("%d",&n);
      
      printf("\n");
      
      int matris[2*n-1][2*n-1];//Girilen değere göre matrisin sınır değerlerine uygun (2n-1) değerinde 2boyutlu matris oluşturuyoruz.
      
      for(i=0;i<2*n-1;i++)//Tüm değerleri 0'lıyoruz.
      {
        for(j=0;j<2*n-1;j++)
			matris[i][j]=0;
      }
      
      a=n-2;// Oluşturulan boyuta göre belirli bir kural çıkıyor , bir kısım sureklı artarken diğer kısım sureklı azalıyor..
      matris[0][n-1]=1;//..(Bu kuralı kağıda çizip daha net görebilirsiniz)
      b=n;
      
      for(i=1;i<=n-1;i++)//yıldız gerecek yerleri 1 e esıtlıyoruz.
      {
        matris[i][a]=1;
        matris[i][b]=1;
        a--;
        b++;
      }
      
      a+=2;
      b-=2;
      
      for(i=n;i<=2*n-3;i++)//aynı kuralı programın alt kısmında yazpıyoruz.
      {
        matris[i][a]=1;
        matris[i][b]=1;
        a++;
        b--;
      }
      
      matris[2*n-2][(2*n-2)/2]=1;
      
      for(i=0;i<2*n-1;i++)
      {
        for(j=0;j<2*n-1;j++)//eğer 1 ise yıldız 0 ise bosluk koy..
        {
          if(matris[i][j]==1)
          	printf("*");
          	
          else
          	printf(" ");
        }
		printf("\n");
      }
      
      getch();
      return 0;
}

