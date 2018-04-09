#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <gmp.h>
#include <gmpxx.h>

int main ()
{
	mpz_t a, b, c;
	
 	mpz_init(a);
 	mpz_init(b);
  	mpz_init(c);
  	
  	mpz_set_str(a, "999999999999", 10);
 	mpz_set_str(b, "99999", 10);

	mpz_mul(c, a, b);
  	
	gmp_printf("\n    %Zd\n*\n    %Zd\n--------------------\n%Zd\n\n", a, b, c);
 
	// Hafizayi sil
	mpz_clear(a);
	mpz_clear(b);
	mpz_clear(c);
	
	return EXIT_SUCCESS;

}
