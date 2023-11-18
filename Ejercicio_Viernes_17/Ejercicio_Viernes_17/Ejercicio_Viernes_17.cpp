// Control de acceso ejercicios para probar las funciones

#include <stdlib.h>  // Incluimos librerias necearias
#include <iostream>  // esta libreria nos permite utilizar la funcion time 
#include <stdio.h>
#include <conio.h>
using namespace std;

int opcion = 0, eleccion = 0;
string NombreComp;

int sorprendeme()
{
    cout << "hasta aqui";
    system("pause");
    return(0);
}
int PresentarMenu(int elec)
{  
    //system("color df");
    
    cout << "Para entrar al programa presione 1 y Indique su nombre completo: ";
    cout << "\nPara acceder al menu 2 debe completar el 1 paso";
    cout << "\nSi a cumplido los dos pasos anteriores pulse 3 y estara dentro de la APP\n";
    cout << "Indique una opcion: ";
    cin >> eleccion;
    return(eleccion);
}


int main()
{
    //int eleccion = 0, opcion = 0;
    system("Usted esta en el paso # 1");
    do 
    {
        
        system("cls");
         cout << "1- Para entrar al programa presione 1 y Indique su nombre completo: ";
         cout << "\n2- Para acceder al menu 2 debe completar el 1 paso";
         cout << "\n3- Si a cumplido los dos pasos anteriores pulse 3 y estara dentro de la APP\n";
         cout << "Indique una opcion: ";
         cin >> eleccion;
         //return(eleccion);
         //eleccion = a;
         switch (eleccion)
         {
         case 1:
             system("title Usted esta en el paso # 1");
             cout << "\nIngrese su nombre completo: ";
             //cin.ignore();
             //getline(cin, NombreComp);
             cin >> NombreComp;
             opcion = 2;
             eleccion = 2;
             
         case 2:
             if (opcion == 2)
             {
                 opcion = 3;
                 eleccion = 3;
                 system("title usted esta en el paso # 2 ");
                 cout << "\n Bienvenido " << NombreComp << "\n";
                 system("pause");
               
                            
             }
             else
             {
                 system("cls");
                 cout << "\n Usted no a ingresado por la opcion 1\n";
                 opcion = 0;
                 system("pausa");
             }
             break;
         case 3:
             if (opcion == 3)
             {
                 system("title Usted esta en el paso 3");
                 cout << "listo \n";
                 system("pause");
             }
             else
             {
                 system("cls");
                 cout << "\n Usted necesita cumplir con los 2 pasos anteriores\n";
                 opcion = 0;
                 system("pause");
             }
             break;
         default:
             system("cls");
             cout << "\n Usted a ingresado una opcion incorrecta, intentelo de nuevo\n";
             opcion = 0;
             system("pause");
             break;
         }

    }
         while (opcion = 3);
    sorprendeme();
    return(0);

}