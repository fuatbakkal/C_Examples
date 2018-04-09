#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <gmp.h>

// Tabani 2 gir ustu 999 gibi buyuk gir
 
int main()
{
    mpz_t taban, sonuc,bir,g_us,sonuc1;
    int asalmi1,asalmi2;
    unsigned long int us;
    unsigned long int i;
    mpz_init(taban);
    mpz_init(sonuc);
    mpz_init(sonuc1);
    mpz_init(g_us);
    mpz_init(bir);
 
    mpz_set_ui(bir,1);
 
    gmp_printf("Tabanı giriniz. \n");
    gmp_scanf("%Zd", &taban);
 
    gmp_printf("Ussu giriniz. \n");
    gmp_scanf("%ld", &us);
 
    for (i=1;i<us;i++){
        mpz_set_ui(g_us,i);
        asalmi1= mpz_probab_prime_p(g_us,10);
        if (asalmi1==2){
            mpz_pow_ui(sonuc, taban, i);
            mpz_sub(sonuc1,sonuc,bir);
            asalmi2= mpz_probab_prime_p(sonuc1,10);
            if((asalmi2==2)||(asalmi2==1)){
                printf("%d \n",i);
                gmp_printf("--%Zd\n", sonuc1);
            }
        }
    }
    mpz_clear(taban);
    mpz_clear(sonuc);
    mpz_clear(sonuc1);
 
}
