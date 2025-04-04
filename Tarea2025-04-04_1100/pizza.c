#include <stdio.h>
int main()
{
    int tipoPizza;
    int opcion;
    int esVegetariana;
    int ingrediente;
    printf("Bienvenido a Bella Napoli\n");
    printf("¿Desea una pizza vegetariana?\n");
    printf("1. Si\n");
    printf("2. No\n");
    scanf("%d", &tipoPizza);

    if (tipoPizza == 1)
        {
        esVegetariana = 1;
        printf("Ingredientes vegetarianos:\n");
        printf("1. Pimiento\n");
        printf("2. Tofu\n");
        printf("Seleccione uno: ");
        scanf("%d", &ingrediente);}
    else
        {
        esVegetariana = 0;
        printf("Ingredientes no vegetarianos:\n");
        printf("1. Peperoni\n");
        printf("2. Jamon\n");
        printf("3. Salmon\n");
        printf("Seleccione uno: ");
        scanf("%d", &ingrediente);}
printf("Su pizza");
if (esVegetariana == 1)
    {
        printf("Tipo: Vegetariana\n");
        printf("Ingredientes: Mozzarella, Tomate, ");
        if (ingrediente == 1)
            {
                printf("Pimiento\n");
        }
        else if (ingrediente == 2)
        {
            printf("Tofu\n");
        }
        else
            {
            printf("Pimiento (opcion invalida, se eligio por defecto)\n");
            }
    } else
    {
        printf("Tipo: No vegetariana\n");
        printf("Ingredientes: Mozzarella, Tomate, ");
        if (ingrediente == 1) {
            printf("Peperoni\n");
        } else if (ingrediente == 2) {
            printf("Jamon\n");
        } else if (ingrediente == 3) {
            printf("Salmon\n");
        } else {
            printf("Peperoni (opción inválida, se eligió por defecto)\n");
        }
    }

    return 0;
}
