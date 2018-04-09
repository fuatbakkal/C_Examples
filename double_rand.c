#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>


double genRandRealNum(double lb, double ub){

double rassal;

rassal = ((double) rand() / RAND_MAX) * (ub-lb) + lb;
return rassal;
}


double main() {

double i;
double x;

srand(time(NULL));

for(i=0;i<10;i++){
x=genRandRealNum(3,15);
printf("%lf\n",x);

}

getch();
return 0;
}
