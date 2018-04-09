#include <iostream>
using namespace std;

int ikili_arama(int [], int, int, int);

int main(void)
{
	int dizi[5]={2, 5, 10, 25, 33};
	
	ikili_arama(dizi, 10, 2, 30);
}

int ikili_arama(int a[], int n, int low, int high)
{
	int mid;
	
	if(low > high)
	{
		cout<<"Aralik yanlis belirtilmis";
		return -1;
	}
		
		
	mid=(high+low)/2;
	
	if(n==a[mid])
	{
		cout<<"Aradiginiz eleman "<<mid+1<<". siradadir.";
		return 0;
	}
		
	if( n < a[mid] )
	{
		high = mid - 1;
		ikili_arama(a, n, low, high);
	}
	
	if( n > a[mid])
	{
		low = mid + 1;
		ikili_arama(a, n, low, high);
	}
}
