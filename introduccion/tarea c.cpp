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
	cout << "1.1" << endl;

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
	cout << "1.2" << endl;

	cout << "Multiplicaciones 2x, 3x, 4x y 5x." << endl;
	double R;
	int NUM;
	cout << "Ingresa un numero: ";
	cin >> NUM;
	cout << "tu numero es: " << NUM << endl;
	cout << "Tu numero multiplicaodo es: " << endl;

	R = NUM * 2;
	cout << "MULTIPLICADO X2: " << R << endl;

	R = NUM * 3;
	cout << "MULTIPLICADO X3: " << R << endl;

	R = NUM * 4;
	cout << "MULTIPLICADO X4: " << R << endl;

	R = NUM * 5;
	cout << "MULTIPLICADO X5: " << R << endl;

	cout << "\n" << endl;

	//1.3
	cout << "1.3" << endl;

	int peso;
	cout << "introduce tu peso en kg: ";
	cin >> peso;
	double LB;
	LB = peso * 2.2;
	cout << "Tu peso en libras es: " << LB << endl;

	cout << "\n" << endl;

	//1.4
	cout << "1.4" << endl;
	int n1;
	cout << "introduce un numero: ";
	cin >> n1;
	int n2;
	cout << "introduce un numero: ";
	cin >> n2;
	int n3;
	cout << "introduce un numero: ";
	cin >> n3;
	double suma;
	double promedio;
	suma = n1 + n2 + n3;
	cout << "suma total de los numeros: " << suma << endl;

	promedio = suma / 3;
	cout << "promedio de los 3 numeros: " << promedio << endl;

	cout << "\n" << endl;

	//1.5
	cout << "1.5" << endl;

	int totaldelacuenta;
	cout << "introduce el total de la cuenta:";
	cin >> totaldelacuenta;
	int porcentajedepropina;
	cout << "introduce cual sera el porcentaje de la propina" << endl;
	cin >> porcentajedepropina;
	double porcentaje;

	porcentaje = (porcentajedepropina * totaldelacuenta) / 100;
	cout << "total de propina: " << porcentaje << endl;

	cout << "\n" << endl;


	//1.6 
	cout << "1.6" << endl;

	int numerototal;
	cout << "ingresa un numero del 0-100: ";
	cin >> numerototal;
	if (numerototal > 100)
	{
		cout << "Mayor que 100" << endl;
	}
	else
	{
		cout << "El numero es menor o igual a 100" << endl;
	}

	cout << "\n" << endl;

	//1.7 
	cout << "1.7" << endl;
	int numero0;
	cout << "ingresa un numero ya sea positivo o negativo: ";
	cin >> numero0;
	if (numero0 < 0)
	{
		cout << "el numero es negativo" << endl;
	}
	else
	{
		cout << "el numero es positivo" << endl;
	}

	cout << "\n" << endl;

	//1.8

	cout << "1.8" << endl;
	string correo;
	cout << "introduce tu correo electronico: ";
	cin >> correo;

	string password;
	cout << "Introduce tu contraseña: ";
	cin >> password;

	if (password == "12345")
	{
		cout << "Tu contraseña es correcta" << endl;
	}

	else
	{
		cout << "Tu contraseña es incorrecta" << endl;
	}

	cout << "\n" << endl;


	//1.9
	cout << "1.9" << endl;
	int farenheith;
	cout << "introducir grados farenheit: ";
	cin >> farenheith;

	double centigrados;
	if (farenheith == 32)
	{
		cout << "cero" << endl;
	}
	else
	{
		centigrados = (farenheith - 32) * (5.0 / 9.0);
		cout << "conversion a grados centigrados: " << centigrados << endl;
	}

	cout << "\n" << endl;


	//1.10
	cout << "1.10 " << endl;

	int peso1;
	cout << "introduce tu peso en kg: ";
	cin >> peso1;

	double estatura;
	cout << "introduce tu estatura en m: ";
	cin >> estatura;

	double masa;
	masa = (peso1) / (estatura * estatura);
	cout << "tu masa corporal es: " << masa << endl;

	cout << "\n" << endl;

	if (masa < 18.5)
	{
		cout << "abajo del peso normal" << endl;

	}

	if (masa >= 18.5 and masa<25)
	{
		cout << "peso normal" << endl;

	}

	if (masa >= 25 and masa < 30)
	{
		cout << "sobrepeso" << endl;

	}
	
	if (masa >= 30 and masa < 35)
	{
		cout << "obeso clase 1" << endl;

	}
	
	if (masa >= 35 and masa < 40)
	{
		cout << "obeso clase 2" << endl;

	}
	
	if (masa >= 30)
	{
		cout << "obeso clase 3" << endl;

	}

	
}
