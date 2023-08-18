/*
10. Factorial
Juan Pablo Gonzalez
Comision 2 - 2023
Programacion 1 - Ingenieria en computacion
Usuario de GitHub: Juampi44
*/

#include <stdio.h>

/* funcion que calcula factorial de número */
long factorial(int numero) {
    long resultado = 1; /* resultado en 1 */

    /* usamos un bucle for para calcular el factorial */
    for (int i = 1; i <= numero; i++) {
        resultado *= i;
    }

    return resultado;
}

int main() {
    int numero;

    /* pide al usuario que ingrese numero */
    printf("ingresar numero: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("error, ingresar numero entero\n");
    } else {
        long resultado = factorial(numero);
        printf("Factorial de %d es %ld\n", numero, resultado);
    }

    return 0;
}