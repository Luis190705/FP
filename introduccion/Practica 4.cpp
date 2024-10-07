
#include <iomanip>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

//ejercicio 4

int main() 
{
    //Introducir una linea completa de texto (streing)
    //cin.ignore(); ignora la instruccion cin anterior
    string nombreCompleto;
    cout << "introduce tu nombre completo: ";
    getline(cin, nombreCompleto); //obtiene una linea completa de texto
    cout << "tu nombre completo: " << nombreCompleto << endl;

    //ejercicio 5
    //longitud de texto: una variable tipo string puede accesar a la funcion lenght() para obteber cuantos caracteres tiene
    //De que tamaño es un string
    cout << "La longitud del texto es: " << nombreCompleto.length() << endl;

    //ejercicio 6
    //al ser una cadena (string) se puede obtener la posision de cualquier caracter []
    //Como acceder un caracter especifico en un texto (string)
    cout << "El primer caracter de nombre completo es: " << nombreCompleto[0] << endl;

    //ejercicio 7
    //Cambiar un caracter especifico en un texto (string)
    string cambio = "hola";
    cambio[0] = 'H';
    cout << cambio << endl;
    cout << "Cambiar h por H: " << cambio << endl;

    //ejercicio 8
    // convertir un string a MAYUSCULAS
    string textoMinusculas = "texto a convertir ";
    transform(textoMinusculas.begin(), textoMinusculas.end(), textoMinusculas.begin(), ::toupper);
    cout << "texto en mayusculas: " << textoMinusculas << endl;

    //ejercicio 9
    //convertir un string a minusculas
    string textoMayusculas = "TEXTO A CONVERTIR";
    transform(textoMayusculas.begin(), textoMayusculas.end(), textoMayusculas.begin(), ::tolower);
    cout << "Texto en minusculas: " << textoMayusculas << endl;

    //ejercicio 10
    //Insertar un texto dentro de otro texto
    string  textoPrincipal = "Jose, ";
    textoPrincipal.insert(6, "Luis");
    cout << "insertar texto dentro de otro: " << textoPrincipal << endl;

    //ejercicio 11
    //revertir un texto
    string textoRevertir = "hola mundo!";
    reverse(textoRevertir.begin(), textoRevertir.end());
    cout << "texto revertido: " << textoRevertir << endl;

    //ejercicio 12
    //Convertir un numero a un string
    int n1 = 123;
    string numeroAtexto = to_string(n1);
    cout << "numero como string: " << numeroAtexto+" esto es un texto" << endl;
   
    //ejercicio 13
    //convertir un string a numero
    string textoAnumero = "123";
    int n2 = stoi(textoAnumero);
    cout << "string como numero: " << n2 << endl;
