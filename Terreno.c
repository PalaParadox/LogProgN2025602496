#include <stdio.h>

int main()
{
    double sinIVA, conIVA;
    double IVA = 0.16;
    double m2 = 9256.00;
    double areaT, totalIVA;

    printf("Escriba el area total del terreno: ");
    scanf("%lf", &areaT);
    sinIVA = areaT * m2;
    totalIVA = sinIVA * IVA;
    printf("El precio total del terreno, sin IVA, es de: %lf\n", sinIVA);
    printf("El precio total del terreno con IVA, es de: %lf\n", totalIVA);

    return 0;
}
