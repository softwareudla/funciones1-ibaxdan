#include <stdio.h>
#include "funciones.h"
#include <string.h>

int main(){
    //definir datos de entrada
    char productos[10][50];
    float precios[10];
    char nombreProducto[50];
    float continuar = 1;

    //lectura de datos 
    lectura(productos, precios);

    //imprime el precio total de los productos llamando a la funcion
    printf ("el precio total de los productos es: %.2f\n",preciototalinv(precios));

    //llama a la funcion MayorMenor para determinar cual es el producto de mayor y menor precio
    MayorMenor(precios,productos);

    //se imprime el promedio de los precios llamando a la funcion promedio 
    printf ("el promedio de los precios es: %.2f\n",promedio(precios));

    // estructura repetitiva while para busqueda de precio por nombre de producto
    while (continuar == 1)
    {
        printf("Ingrese el nombre del producto que desea buscar: ");
        scanf("%s", nombreProducto);
        buscarProducto(productos, precios, nombreProducto);

        //mensaje para determinar si desea buscar otro producto
        do
        {
            printf("¿desea buscar otro producto?\n1 = si\n2 = no\n");
            scanf("%f", &continuar);
            if (continuar != 1 && continuar != 2)
            {
                printf("el numero ingresado no es valido, intenta de nuevo.\n");
            }
            
        } while (continuar != 1 && continuar != 2);
        
    }
    return 0;
}