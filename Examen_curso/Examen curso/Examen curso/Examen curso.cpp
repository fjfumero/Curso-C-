// Ejercicio de examen LIBRERIA

#include <stdlib.h>  // Incluimos librerias necearias
#include <iostream>  // esta libreria nos permite utilizar la funcion time 
#include <stdio.h>
#include <string>
#include <cstring>
#include <conio.h>
#include <locale.h>
#include <windows.h>
using namespace std;

int opcion, LargoS, Eleccion;             // inicializamos variables
int largotitulo, largoautor;
int cuenta;
bool comprando = false;
double Importe, Iva, Total, pagar, impuesto, base;
string Temp, largo, espacio = "", espacio2 = "";


class Tienda {           // declaracion de la clase
public:                  // tipo de acceso
    string titulo;       // asignacion de tipo de variables
    string autor;
    double precio;
    int cantidad;
};

void IdiomaEspanol() // Funcion para trabajar con caracteres en español
{
    setlocale(LC_ALL, "ES_es.UTF-8");
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);
    return;
}

int main()
{
    IdiomaEspanol();
   
    Tienda* arr = new Tienda[4];                 // creamos el constructor array del objeto colocamos 4 por ser el 
                                                 // numero de libros +1 que tenemos
    Tienda libro[4];                             // llenamos los datos de la clase
    libro[1].titulo = "La Catedral del Mar";
    libro[1].autor = "Ildefonso Falcones";
    libro[1].precio = 19.80;
    libro[1].cantidad = 0;

    libro[2].titulo = "La sombra del viento";
    libro[2].autor = "Carlos Ruiz Zafón";
    libro[2].precio = 15.20;
    libro[2].cantidad = 0;

    libro[3].titulo = "Los Pilares de La Tierra";
    libro[3].autor = "Carlos Ruiz Zafón";
    libro[3].precio = 21.20;
    libro[3].cantidad = 0;

    do
    {


        cout << "------ Listado de Libros ------\n\n";
        cout << "         Titulo                             Autor                    Precio             Cantidad       Subtotal \n";
        for (int a = 1; a < 4; a++)
        {
            largo = libro[a].titulo;
            largotitulo = largo.length();
            largo = libro[a].autor;
            largoautor = largo.length();
            cuenta = 35 - largotitulo;
            for (int b = 0; b < cuenta; b++)
            {
                espacio = espacio + " ";
            }
            cuenta = 35 - largoautor;
            for (int c = 0; c < cuenta; c++)
            {
                espacio2 = espacio2 + " ";
            }
            cout << a << " - " << libro[a].titulo << espacio << libro[a].autor << espacio2 << libro[a].precio
                << "              " << libro[a].cantidad << "           "<< libro[a].cantidad * libro[1].precio << "\n";
            pagar = pagar + libro[a].cantidad * libro[1].precio;
            impuesto = pagar * 0.10;
            base = pagar - impuesto;
            espacio = "";
            espacio2 = "";

        }
        
        cout << "\n                                                                                       Base Imponible:   " << base;
        cout << "\n                                                                                            Monto IVA:   " << impuesto;
        cout << "\n                                                                                        total a pagar:   " << pagar;
        cout<< "\n\n4- Para añadir un libro al carro de compras pulse 4\n";
        cout << "5- Para abandonar la compra pulse 5\n";
        cout << "Indique su eleccion\n";
        cin >> Eleccion;

        if (comprando == true)
        {

            switch (Eleccion)
            {
            case 1:
            {
                libro[1].cantidad++;
                system("cls");
                break;
            }
            case 2:
            {
                libro[2].cantidad++;
                system("cls");
                break;
            }
            case 3:
            {
                libro[3].cantidad++;
                system("cls");
                break;
            }
            case 4:
            {
                cout << "\n Usted ya esta en el modo de compra\n";
                comprando = true;
                system("pause");
                system("cls");
                break;
            }
            case 5:
            {
                system("cls");
                break;
            }
            }
            Eleccion = 0;
        }
        else
        {
            cout << "\nPara añadir libros al carrito primero pulse la opcion 4\n";
            system("pause");
            system("cls");
            comprando = true;

        }
    }
    while (Eleccion == 5);

    return 0;
}