#include <iomanip>
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cmath> 
#include <cstdlib> 

using namespace std;

int main()
{
	int n1 = 3;
	int n2 = 5;
	int n3 = 1;
	int n4 = 10;
	int n5 = 2;
	int n6;

	n6 = (n1 + n2) * (n5 / n5) - (n3);
	cout << "3 + 5 * 2 / 2 – 1= " << n6 << endl;

	n6 = (n1)+(n4 / n1) - (n5);
	cout << "3 + 10 / 2 - 1 = " << n6 << endl;

	n6 = (n1 + n2) - n3;
	cout << "3 + 5 - 1 = " << n6 << endl;

	n6 = (8 - n3);
	cout << "8 - 1 = " << n6 << endl;

	n6 = (n3 / n1) * 3;
	cout << "1 / 3 * 3 = " << n6 << endl;

	string numero;
	cout << "introduce un numero: ";
	getline(cin, numero); 
	cout << endl;

	double num = atof(numero.c_str());
	double potenciaCuadrada = pow(num, 2);
	cout << "Tu numero es: " << num << endl;
	cout << "La potencia cuadrada de " << num << " es: " << potenciaCuadrada << endl;



