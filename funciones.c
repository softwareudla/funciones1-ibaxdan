#include <stdio.h>
#include "funciones.h"
#include <string.h>

//lectura de datos
void lectura(char productos[10][50], float precios[10]){
    int i = 0;
    do
    {
        printf("ingresa el nombre del producto %d: ",i+1);
        scanf("%s", productos[i]);
        
        //control de precios 
        do {
            printf("Ingrese el precio del %s: ", productos[i]);
            scanf("%f", &precios[i]);
            if (precios[i] < 0) {
                printf("El precio no puede ser negativo. Intenta de nuevo.\n");
            }
        } while (precios[i] < 0);
        
        i++;
    } while (i<10);
}

//precio total del inventario
float preciototalinv(float precios[10]){
    float total;
    for (int i = 0; i < 10; i++)
    {
      total+=precios[i];
    }
    return total;
}

//producto mas caro y mas barato 
void MayorMenor(float precios[10],char productos[10][50]){
    int i = 0;
    float max = precios[i];
    float min = precios[i];
    int indice1 = 0;
    int indice2 = 0;
    for (i = 1; i < 10; i++)
    {
        if (precios[i]>max)
        {
            max = precios[i];
            indice1 = i;
        }
        if (precios[i]<min)
        {
            min = precios[i];
            indice2 = i;
        }     
    }
    printf("el producto de mayor precio es: %s\n su precio es: %.2f\n",productos[indice1], max);
    printf("el producto de menor precio es: %s\n su precio es: %.2f\n",productos[indice2], min);
}
//calcular precio promedio de todos los productos 
float promedio(float precios[10]){
    float promedio = 0;
    promedio = preciototalinv(precios) /10;
    
    return promedio;
}   
    
//buscar un producto por su nombre y hallar su precio
void buscarProducto(char productos[10][50], float precios[10], char nombre[50]) {
    for (int i = 0; i < 10; i++) {
        if (strcmp(productos[i], nombre) == 0) { // Comparar cadenas
            printf("El precio del producto %s es: %.2f\n", productos[i], precios[i]);
            return; // Salir de la función si se encuentra el producto
        }
    }
    printf("El producto %s no se encuentra en la lista.\n", nombre);
}
