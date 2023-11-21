// Control de acceso ejercicios para probar las funciones

#include <stdlib.h>  // Incluimos librerias necearias
#include <iostream>  // esta libreria nos permite utilizar la funcion time 
#include <stdio.h>
#include <string>
#include <conio.h>
using namespace std;

int opcion = 0, eleccion = 0; // inicializamos las variables opcion para movernos por el menu
                             // y eleccion para saber que pulso el usuario
string NombreComp;          // variable para el nombre del usuario

int sorprendeme()           // funcion a ejecutar luego de pasar por el menu
{
    cout << "hasta aqui";
    system("pause");
    return(0);
}


int main()          // funcion principal
{
    do
    {
        system("cls");  // limpiamos la consola y colocamos el menu
        cout << "1- Para entrar al programa presione 1 y Indique su nombre completo: ";
        cout << "\n2- Para acceder al menu 2 debe completar el 1 paso";
        cout << "\n3- Si a cumplido los dos pasos anteriores pulse 3 y estara dentro de la APP\n";
        cout << "Indique una opcion: ";
        cin >> eleccion;  // solicitamos la eleccion del usuario
        
        switch (eleccion)  // realizamos comparaciones en forma de case para saber que numero del menu 
                           // ingreso el usuario
        {
        case 1:
            system("title Usted esta en el paso # 1");  // seteamos el titulo de la ventana de consola
            cout << "\nIngrese su nombre completo: ";   // solicitamos el nombre completo
            cin.ignore();
            getline(cin, NombreComp);
            opcion = 2; // colocamos la variable de paso por el menu apuntando a la segunda opcion
            break;

        case 2:
            if (opcion == 2)
            {
                opcion = 3; // colocamos la variable de paso por el menu apuntando a la tercera opcion
                system("title usted esta en el paso # 2 ");  // seteamos el titulo de la ventana de consola
                cout << "\n Bienvenido " << NombreComp << "\n"; // mostramos el mensaje de bienbenida y nombre de usuario
                system("pause"); // paramos para poder visualizar
                break;
            }
            else
            {
                system("cls"); // borramos la consola
                cout << "\n Usted no a ingresado por la opcion 1\n";
                opcion = 0; // colocamos la variable de paso por el menu apuntando al primer paso
                system("pause");
                break;
            }
        case 3:
            if (opcion == 3)
            {
                system("title Usted esta en el paso 3");
                cout << "listo \n";
                system("pause");
                break;
            }
            else
            {
                system("cls");
                cout << "\n Usted necesita cumplir con los 2 pasos anteriores\n";
                opcion = 0;
                system("pause");
                break;
            }
        default:
            system("cls");
            cout << "\n Usted a ingresado una opcion incorrecta, intentelo de nuevo\n";
            opcion = 0;
            system("pause");
            break;
        }
        eleccion = 0;
    } while (opcion = 3);
    sorprendeme();
    return(0);

}
