// Control de acceso

#include <stdlib.h>  // Incluimos librerias necearias
#include <iostream>  // esta libreria nos permite utilizar la funcion time 
#include <stdio.h>
#include <conio.h>
using namespace std;  // esta linea nos permite omitir escribir std a lo largo del programa

int numero1 , numero2 ;



int Prueba( int numero1, int numero2) {
    int  suma = 0, intentos = 5;
    do  // sentencia hacer mientras
    {
       
        srand(time(NULL));  //indica que elprograma tome la "semilla" para generar su random 
                            //basada en la función de la hora del procesador.

        numero1 = 1 + rand() % (11 - 1);  //genera el primer numero aleatorio entre el 1 y el 10
        numero2 = 1 + rand() % (11 - 1);  //genera el segundo numero aleatorio entre el 1 y el 10
       
        // se presenta el mensaje en pantalla 
        cout << "Introduzca el resultado de la siguiente suma: " << numero1 << " + " << numero2 << " = ";

        // se espera la entrada del numero solicitado
        cin >> suma;
        if (suma == numero1 + numero2) // pregunta si la suma es correcta
        {
            system("cls");
            system("Color 1f");
            cout << "Acceso correcto. Bienvenido.\n\n"; // mensaje si la suma es correcta
            return(0);
        }
        if (intentos > 1) {

            cout << "Acceso denegado.\n\n"; // mensaje si la suma no es correcta
            intentos--; // resta uno cada vez que pasa por este punto
            cout << " Le quedan " << intentos << " intentos\n";
        }
        else
        {
            system("cls");
            system("Color 4f");
            cout << "Acceso denegado, intentos agotados\n\n";

            return(0);
        }
       

    } while (suma != (numero1 + numero2)); // complemento de la funcion "do", (hacer mientras la suma no sea correcta
}

int main() // inicio del programa
{
    
    cout << "Bienbenido, para demostrar que no es un robot se le pedira ingresar el resultado de una suma \n";
    system ("pause");
    
    Prueba (numero1, numero2); // llamada a la funcion prueba
   
    return 0;
}
