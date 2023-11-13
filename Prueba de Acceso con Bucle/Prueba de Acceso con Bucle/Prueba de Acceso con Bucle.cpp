// Control de acceso

#include <stdlib.h>  // Incluimos librerias necearias
#include <iostream>  // esta libreria nos permite utilizar la funcion time 
#include <stdio.h>
#include <conio.h>
using namespace std;  // esta linea nos permite omitir escribir std a lo largo del programa


int main() // inicio del programa
{

    int numero1, numero2, suma, intentos = 5; // declaracion de las variables

    srand(time(NULL));  //indica que elprograma tome la "semilla" para generar su random 
    //basada en la función de la hora del procesador.
    do  // sentencia hacer mientras
    {
        numero1 = 1 + rand() % (11 - 1);  //genera el primer numero aleatorio entre el 1 y el 10
        numero2 = 1 + rand() % (11 - 1);  //genera el segundo numero aleatorio entre el 1 y el 10

        // se presenta el mensaje en pantalla 
        cout << "Introduzca el resultado de la siguiente suma: " << numero1 << " + " << numero2 << " = ";

        // se espera la entrada del numero solicitado
        cin >> suma;
        if (suma == numero1 + numero2) // pregunta si la suma es correcta
        {
            cout << "Acceso correcto. Bienvenido.\n\n"; // mensaje si la suma es correcta
            return(0);
        }
        else
        {
            cout << "Acceso denegado.\n\n"; // mensaje si la suma no es correcta
            intentos--; // resta uno cada vez que pasa por este punto
        }
        if (intentos == 1) // contador de intentos
        {
            cout << "Acceso denegado, intentos agotados\n\n";
            suma = numero1 + numero2;
        }
        else
        {
            cout << "le quedan " << intentos << " intentos\n\n";
        }

    } while (suma != (numero1 + numero2)); // complemento de la funcion "do", (hacer mientras la suma no sea correcta


    return 0;
}