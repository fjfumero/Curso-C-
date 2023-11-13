#include <iostream> // incluimos la librería base 
#include <string> // incuimos la librería string
#include <locale.h> // incuimos la librería locale para incorporar idiomas
#include <windows.h> // incluimos librería windows.h para establecer idiomas para outputs y consola

using namespace std; // incluuimos el espacio de nombres std
string NombreCompleto; // declaración de la variable

int main() {
	SetConsoleOutputCP(1252); // para poder sacar caracteres especiales
	SetConsoleCP(1252); // para poder recibir caracteres especiales

	setlocale(LC_ALL, "spanish");
	
	cout << "Introduce aquí tu nombre completo: "; // en esta linea en pantalla no se muestra la í REVISAR

	getline(cin, NombreCompleto);// getline() Para recoger cadenas separadas

	//cin >> nombre;
	cout << "Hola " << NombreCompleto << endl;

	system("pause");

	return 0;
}