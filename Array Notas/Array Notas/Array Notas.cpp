// Cargamos las bibliotecas necesarias

#include <iostream>
#include <locale.h>
#include <string>
#include <windows.h>

using namespace std;

// Declaramos variable ( al estar fuera de cualquier funcion son globales
float SumaNota[10], notas[10], NotaMedia;
int NumeroAlumnos, CantidadNotas = 0;
string Alumnos, NombreAlumno[10];

void IdiomaEspanol() // Funcion para trabajar con caracteres en español
{
    setlocale(LC_ALL, "ES_es.UTF-8");
    SetConsoleOutputCP(1252);
    SetConsoleCP(1252);
    return;
}

int main()
{
    IdiomaEspanol(); // llamanos a la funcion de español

    // Solicitamos numero de alumnos y cantidad de notas por cada uno
    cout << "Indique la cantidad de Alumnos (Maximo 10) : ";
    cin >> NumeroAlumnos;
    if (NumeroAlumnos > 10)
    {
        cout << "Excedio el numero maximo de alumnos ";
        system("pause"),
        system("cls");
        return(0);
    }
    cout << "\n";
    cout << "Indique la cantidad de notas por Alumno: ";
    cin >> CantidadNotas;
    cout << "\n";
    for (int i = 0;i < NumeroAlumnos; i++) // Bucle para pedir cada alumno
    {
        cout << "Nombre del alumno # " << i+1 <<" ";
        cin >> NombreAlumno[i];
        for (int b = 0; b < CantidadNotas; b++) // Bucle para pedir cada nota
        {
            cout << "Indique la nota numero " << b+1 << " del alumno " << NombreAlumno[i] << " : ";
            cin >> notas[b];
            cout << "\n";
            SumaNota[i] += notas[b];
        }

    }
    for (int c = 0; c < NumeroAlumnos; c++) // Bucle para calcular promedio de notas por alumno
    {
        NotaMedia = SumaNota[c] / CantidadNotas;
        cout << "La nota Promedio de " << NombreAlumno[c] << " es: " << NotaMedia << "\n";

    }
        return(0);
    }
