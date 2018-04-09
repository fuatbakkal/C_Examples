#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
setlocale(LC_ALL,"Turkish"); // Türkçe karakter için gerekli

printf("\n\tÖöçÇııİİşŞğĞüÜ\n\tbızz\n");


getchar();
return 0;

}
