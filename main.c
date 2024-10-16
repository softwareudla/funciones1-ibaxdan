#include <stdio.h>
#include "funciones.h"
#include <string.h>

int main(){
    char productos[10][50];
    float precios[10];
    char nombreProducto[50];
    float continuar = 1;
    lectura(productos, precios);
    printf ("el precio total de los productos es: %.2f\n",preciototalinv(precios));
    MayorMenor(precios,productos);
    printf ("el promedio de los precios es: %.2f\n",promedio(precios));
    
    while (continuar == 1)
    {
        printf("Ingrese el nombre del producto que desea buscar: ");
        scanf("%s", nombreProducto);
        buscarProducto(productos, precios, nombreProducto);

        printf("¿desea buscar otro producto?\n1 = si\n2 = no\n");
        scanf("%f", &continuar);
    }
    return 0;
}