// enteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
using namespace std;

int main() {
    // Manejo de punto decimal y separador de miles
    locale loc("");
    cout.imbue(loc);
  // Declaracion e imprasion de string

    string texto0 = "Hola mundo";

    cout << texto0 << endl ;

    // unir 2 textos o mas

    string primerTexto = "Hola";
    string segundoTexto = " mundo!";
    string textounido = primerTexto + segundoTexto;
    cout << textounido << endl;

    // introducir una variable de texto (string) usando teclado

    string nombre;
    cout << "Introduce tu nombre";
    cin >> nombre;
    cout << "Hola " << nombre << "!" << endl;

    return 0;

}
