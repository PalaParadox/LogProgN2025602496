#include <stdio.h>
#include <math.h>
int main ()
{
  int peso;
  double imc, alt;
  printf ("Indique su peso:");
  scanf ("%d",&peso);
  printf ("Indique su altura:");
  scanf ("%lf",&alt);
  imc=(peso/(pow(alt,2)));
  if (imc>=40)
  { printf ("Usted tiene obesidad clase 3 \n");
  printf ("IMC= %.2lf",imc);}
  else if (imc>=35&&imc<=39.9)
  { printf ("Usted tiene obesidad clase 2 \n");
  printf ("IMC= %.2lf",imc);}
  else if (imc>=30&&imc<=34.9)
  { printf ("Usted tiene obesidad clase 1 \n");
    printf ("IMC= %.2lf",imc);}
    else if (imc>=25&&imc<=29.9)
    { printf ("Usted tiene sobrepeso \n");
    printf ("IMC= %.2lf", imc);}
    else if (imc>=18.5&&imc<=24.9)
    { printf ("Usted está normal en peso \n");
    printf ("IMC= %.2lf",imc);}
    else
    { printf ("Usted está bajo de peso \n");
    printf ("IMC= %.2lf",imc);}
    return 0;
}
