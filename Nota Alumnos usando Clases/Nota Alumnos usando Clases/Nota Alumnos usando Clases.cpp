// Cargamos las librerias Necesarias y el espacio de nombres de std
#include <iostream>
#include <locale.h>
#include <string>
#include <windows.h>

using namespace std;


class Aula{       // Creamos la clase "Aula"
public:           // Modo de acceso
                  // Nombramos los elementos de la clase y determinamos su tipo
    int edad;       // Atributo entero 
    string nombre;  // Atributo String
};

void espanol()
{
    // funcion para colocar caracteres en español
    setlocale(LC_ALL, "ES_es.UTF-8");
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);
}


int main()
{

    espanol();
    int CantAlumnos, edades;
    string NombreComp;
    cout << "Indique la cantidad de alumnos: ";
    cin >> CantAlumnos;
    Aula* nombre = new Aula[CantAlumnos];

    for (int i = 0; i < CantAlumnos; i++) {
        cout << "\n Ingreses el nombre del alumno # " << i << " : ";
        cin.ignore();
        getline (cin , NombreComp);
        cout << "\n Ingrese la edad de " << NombreComp << " : ";
        cin >> edades;
        Aula * nombre = new Aula(CantAlumnos);
        Aula.nombre[i] = NombreComp;
        Aula.edad[i] = edades;
   }
    
    /*class Aula; // Creamos class alumno
    Aula.edad = 21;
    Aula.nombre = "paco";
    cout << "Alumno: " << alumno.nombre << " edad: " << alumno.edad << "\n";
    clase alumno2;
    alumno2.edad = 22;
    alumno2.nombre = "pepe";
    cout << "Alumno: " << alumno2.nombre << " edad: " << alumno2.edad << "\n";  */
    
    return 0;

}