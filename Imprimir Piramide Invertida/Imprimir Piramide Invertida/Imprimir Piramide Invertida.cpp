#include <iostream> // incluimos la librería base 
#include <string> // incuimos la librería string
#include <locale.h> // incuimos la librería locale para incorporar idiomas
#include <windows.h> // incluimos librería windows.h para establecer idiomas para outputs y consola

#include <chrono>
#include <thread>

using namespace std; // incluuimos el espacio de nombres std
char CaracterParaImprimir = '*'; // declaración de la variable
int CantidadCaracteresBase, Repeticion;

int main() {
	do {
		cout << "Introdusca la cantidad de caracteres en la base ( de 2 a 20)\n";
		cin >> CantidadCaracteresBase;
	} while (CantidadCaracteresBase < 2 || CantidadCaracteresBase > 20 );
	Repeticion = CantidadCaracteresBase;
	do {
		do  {
			cout << CaracterParaImprimir;
			chrono::seconds timespan(1); // no logro ver el retardo REVISAR
			Repeticion--;
		} while (Repeticion > 0);
		cout << "\n";
		CantidadCaracteresBase--;
		Repeticion = CantidadCaracteresBase;
	} while (CantidadCaracteresBase > 0);

	cout << CaracterParaImprimir;
	

	return(0);
}