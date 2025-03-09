#include <stdio.h>
#include <math.h>
int main ()
{
double at, pt;
double h1=2.828;
double h2=2.136;
int l=2;
at = (2*l*1/4.0*l)+(((l*l)/2)*2)+(l*l)+((3.0/2.0*l*l)/2);
pt = 2*l*sqrt(2)+ (l*sqrt(13))/2+5*l;
printf ("El area total de la figura es: %f", at);
printf ("\n");
printf ("El perimetro total de la figura es: %f", pt);
return 0;
}
