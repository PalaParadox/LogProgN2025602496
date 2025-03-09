#include <stdio.h>
#include <math.h>
int main ()
{
    double at, pt;
    int l=7;
    double pi=3.1416;
    at= (pow (l,2))+(6.0/25*pow(l,2))+(2.0/25*pow(l,2))+((pi/8)*pow(l,2));
    pt= l*(23/5.0+pi/2.0);
    printf ("El area total de la figura es: %f", at);
    printf ("\n");
    printf ("El perimetro total de la figura es: %f", pt);
    return 0;
}
