#include <iostream>
#include <locale.h>
#include <string>
#include <windows.h>

using namespace std;

class clase {
public:
    int edad;
    string nombre;
public:
    clase() {
        cout << "Elemento creado\n";
    }
public:
    ~clase() {
        cout << "Elemento eliminado\n";
    }

};

int main()
{


    setlocale(LC_ALL, "ES_es.UTF-8");
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);
    int a, b;
    string Sellama;
    cout << "Cantidad de Alumnos :";
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        clase* alumno = new clase[a];
        cout << "Ingrese el nombre del Alumno " << i + 1 << " : ";
        cin >> Sellama;
        cout << "\n Indique la edad de " << Sellama << " : ";
        cin >> b;
        alumno[i].edad = b;
        alumno[i].nombre = Sellama;
    }
    /*clase alumno2;
    alumno[1].edad = 23;
    alumno[1].nombre = "Manuel";*/
    cout << "Alumno 1\n";
    cout << "Nombre: " << alumno[i].nombre;
    cout << "\nEdad: " << alumno[i].edad;
    cout << "\n-------------------\n";
    cout << "Alumno 2\n";
    cout << "Nombre: " << alumno[1].nombre;
    cout << "\nEdad: " << alumno[1].edad;
    delete[] alumno;
    cout << "\nAlumno 2\n";
    cout << "Nombre: " << alumno[1].nombre;
    cout << "\nEdad: " << alumno[1].edad;
    return 0;
}