/*
 * Este programa le pregunta al usuario la hora y este le
 * respondera dependiento la hora. El programa solo acepta numeros enteros
 * de 0 a 23. El programa dara los siguientes mensajes:
 *
 * Si la hora es mayor o igual a 2 y menor a 12, dira "Good morning!".
 * Si la hora es mayor o igual a 12 y menor a 19, dira "Good afternoon!".
 * Si la hora es mayor o igual a 19 y menor a 22, dira "Good evening!".
 * Si la hora es mayor o igual a 22 o menor a 2, dira "Good night!".
 *
 * Si la hora es menor a 0 o mayor a 23, el programa mandara un error.
 *
 * Autor: Jonathan Nuñez de Caceres
 * Fecha: 26 de Agosto, 2018
 * Email: A01411277@itesm.mx
 */

#include <stdio.h>

int main() {
    // La variable que guardara la hora dada por el usuario.
    unsigned int hour;

    // Se le pide la hora al usuario.
    printf("Ingresa la hora actual:");
    scanf("%u", &hour);

    // El programa respondera dependiendo la hora ingresada.
    if ((hour < 0) || (hour > 23)){
        // Si la hora ingresada no es valida, se enviara un mensaje
        printf("La hora ingresada no es valida.");
    } else{
        // Si la hora ingresada es valida, se respondera correspondientemente.
        if ((hour >= 2) && (hour < 12)) {
            printf("Good morning!");
        } else if ((hour >= 12) && (hour < 19)) {
            printf("Good afternoon!");
        } else if ((hour >= 19) && (hour < 22)) {
            printf("Good evening!");
        } else {
            printf("Good night!");
        }
    }

    return 0;
}