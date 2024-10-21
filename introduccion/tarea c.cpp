#include <iomanip>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cmath> 
#include <cstdlib> 
#include <conio.h>
#include <stdio.h>

using namespace std;
int main()
{

	//1.1
	string numero;
	cout << "introduce un numero: ";
	getline(cin, numero);
	cout << endl;
	double num = atof(numero.c_str());
	double potenciaCuadrada = pow(num, 2);
	cout << "Tu numero es: " << num << endl;
	cout << "La potencia cuadrada de " << num << " es: " << potenciaCuadrada << endl;
	cout << "\n" << endl;

	//1.2
	cout << "Multiplicaciones 2x, 3x, 4x y 5x." << endl;

	int NUM;
	cout << "Ingresa un numero: " << endl;
	cin >> NUM;
	cout



}
