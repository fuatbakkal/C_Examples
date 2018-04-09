#include <stdio.h>

int main()
{
	ilktag:
	printf("1. tag\a");

	
	ikincitag:
	printf("2. tag\n\a");
	puts("2. tag\n\a");
	
	goto ilktag;
	return 0;
}
