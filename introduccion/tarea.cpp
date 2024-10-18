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
	cout << "1.1" << endl;

	//1.1

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

	cout << "\n" << endl;
	cout << "1.2" << endl;


	//1.2

	string numero;
	cout << "introduce un numero: ";
	getline(cin, numero);
	cout << endl;

	double num = atof(numero.c_str());
	double potenciaCuadrada = pow(num, 2);
	cout << "Tu numero es: " << num << endl;
	cout << "La potencia cuadrada de " << num << " es: " << potenciaCuadrada << endl;

	cout << "\n" << endl;
	cout << "1.3" << endl;


	//1.3

	std::string numero1;
	const double CONVERSION_YARDAS_A_METROS = 0.9144;

	std::cout << "Cual es la cantidad de yardas que deseas convertir a metros: ";
	std::getline(std::cin, numero1);
	std::cout << std::endl;

	double yardas = atof(numero1.c_str());
	double metros = yardas * CONVERSION_YARDAS_A_METROS;

	std::cout << "El numero de yardas es: " << yardas << std::endl;
	std::cout << "La conversion a metros es: " << metros << " metros" << std::endl;

	cout << "\n" << endl;

	//1.4

	//variables

	int year;
	double precio;

	cout << "1.4 Depreciacion de un automovil" << endl;

	// Ingreso de datos
	cout << "Ingresa el año del automovil: ";
	cin >> year;
	cout << "Ingresa el precio del automóvil: ";
	cin >> precio;

	cout << "La depreciacion inicial del automóvil al salir de la agencia es del 37%, y cada año se deprecia un 10%." << endl;

	// Cabecera de la tabla
	cout << "Año\tDepreciación\tDep. Acumulada\tValor Actual" << endl;

	double depreciacionInicial = precio * 0.37;
	double valorActual = precio - depreciacionInicial;
	double depreciacionAcumulada = depreciacionInicial;

	// Imprimir el primer año
	cout << year << "\t" << depreciacionInicial << "\t\t" << depreciacionAcumulada << "\t\t" << valorActual << endl;

	// Calcular la depreciación para los siguientes 4 años
	for (int i = 1; i < 5; i++) {
		year++;
		double depreciacionAnual = valorActual * 0.10;
		depreciacionAcumulada += depreciacionAnual;
		valorActual -= depreciacionAnual;

		cout << year << "\t" << depreciacionAnual << "\t\t" << depreciacionAcumulada << "\t\t" << valorActual << endl;
	}

	cout << "¡Listo! Ahora estas al tanto de cómo se deprecia tu automovil." << endl;
	cout << "\n" << endl;


	cout << "1.5 Deduccion de impuestos de un salario" << endl;


	//1.5
	
	//Datos iniciales
	double salarioMensual = 25000; // Salario mensual en pesos
	double impuestoFijo = 900;      // Impuesto fijo
	double porcentajeImpuesto = 0.015; // 1.5%

	//Se calcula la base del impuesto restando el impuesto fijo del salario mensual.
	//Se calcula el impuesto variable como el 1.5 % de la base del impuesto.
	//Se suma el impuesto fijo y el impuesto variable para obtener el impuesto total.
	//Finalmente, se calcula el sueldo neto restando el impuesto total del salario mensual.

	// Cálculo del impuesto variable
	double baseImpuesto = salarioMensual - impuestoFijo;
	double impuestoVariable = baseImpuesto * porcentajeImpuesto;

	// Cálculo del impuesto total
	double impuestoTotal = impuestoFijo + impuestoVariable;

	// Cálculo del sueldo neto
	double sueldoNeto = salarioMensual - impuestoTotal;

	// Salida de resultados
	cout << fixed << setprecision(2); // Formato de dos decimales
	cout << "Impuesto total a deducir: " << impuestoTotal << " pesos" << endl;
	cout << "Sueldo neto que recibirá el empleado: " << sueldoNeto << " pesos" << endl;

	cout << "\n" << endl;
	cout << "1.6" << endl;

	//1.6 Escriba el código de cada una de las siguientes operaciones en C++; por favor cree una 
	// variable con el nombre de su elección e imprima el resultado con la instrucción cout :
		

	// 1) 3 * 4
	// 2) 12 / 3
	// 3) 12 % 3
	// 4) 12 % 7
	// 5) 3 + 3.0
	// 6) 10 / 100
	// 7) Potencia 3 a la 2, para esta instrucción usar
	// i) pow(número a elevar, potencia a elevar)

	double R;

	// 1)
	R = 3 * 4;
	cout << "resultado: " << R << endl;

	//2
	R = 12 / 3;
	cout << "resultado " << R << endl;

	//3
	R = 12 % 3;
	cout << "resultado " << R << endl;

	//4
	R = 12 % 7;
	cout << "resultado " << R << endl;

	//5
	R = 3 + 3.0;
	cout << "resultado " << R << endl;

	//6
	R = 10 / 100;
	cout << "resultado " << R << endl;

	//7 

	R = pow(3, 2);
	cout << "resultado " << R << endl;

	cout << "\n" << endl;
	cout << "1.7" << endl;

	//1.7

	//comparacioes

	int a = 10;
	int b = 20;


		//ii. (a < b)
		//iii. (a == b)
		//iv. (a != b)
		//v. (a + b) > 100
		//vi. (a - b) == 0
		//vii. (a * b) > 500
		//viii. (a * b) < 100
		//ix. (a - b) < 0
		//x.a < 20

	cout << "(a > b): " << (a > b) << endl;

	cout << "(a < b): " << (a < b) << endl;

	cout << "(a == b)" << (a == b) << endl;

	cout << "(a != b)" << (a != b) << endl;

	cout << "((a + b) > 100)" << ((a + b) > 100) << endl;

	cout << "((a - b) == 0)" << ((a - b) == 0) << endl;

	cout << "((a * b) > 500)" << ((a * b) > 500) << endl;

	cout << "((a * b) < 100)" << ((a * b) < 100) << endl;

	cout << "((a - b) < 0)" << ((a - b) < 0) << endl;

	cout << "(a < 20)" << (a < 20) << endl;

	}
