#include <iostream>
using  namespace std;

int main()
{

	// Operaciones Aritmeticas


	//Enteros
	int n1 = 10;
	int n2 = 20;
	int n3;

	//Floats
	float f1 = 1.5;
	float f2 = 5.2;
	float f3;


	// 1.Adicion
	n3 = n1 + n2;
	cout << "resultado suma enteros: " << n3 << endl;
	f3 = f1 + f2;
	cout << "resultado suna flotantes: " << f3 << endl;

	// 2.Sustraccion
	n3 = n1 + n2;
	cout << "resultado resta enteros: " << n3 << endl;
	f3 = f1 - f2;
	cout << "resultado resta flotantes: " << f3 << endl;

	// 3. Multipicacion+
	n3 = n2 * n2;
	cout << "Resultado multipicación enteros: " << n3 << endl;
	f3 = f1 * f2;
	cout << "resultado multipicación flotantes: " << f3 << endl;

	// 4. Divición 

	n3 = n2 / n2;
	cout << "Resultado divicion enteros: " << n3 << endl;
	f3 = f1 / f2;
	cout << "resultado divicon flotantes: " << f3 << endl;

	// 5. Modulo (Residuo de la divición)
	n3 = n2 % n1;
	cout << "Resultado modulo: " << n3 << endl;

	// 6. Operaciones mixtas 
	f3 = n1 + f1;
	cout << "Resultado suma mixta: " << f3 << endl;
	f3 = n2 - f2;
	cout << "Resultado resta mixta: " << f3 << endl;
	f3 = n1 * f2;
	cout << "Resultado multipicación mixta: " << f3 << endl;
	f3 = n2 / f1;
	cout << "Resultado de division mixta: " << f3 << endl;
	f3 = (n1 + n2) * f1 / f2;
	cout << "Resultado operacion mixta: " << f3 << endl;

	//7 Mas ejemplos con floats
	f3 = f1 + 10.3;
	cout << "Resultado suma flotantes: " << f3 << endl;
	f3 = f2 * 2.5;
	cout << "Resultado multiplicaciones flotantes: " << f3 << endl;
	f3 = f1 / 2.0;
	cout << "Resultado divion flotantes: " << f3 << endl;
	f3 = f2 - 3.2;
	cout << "Resultado resta flotantes: " << f3 << endl;

	// 8. Combinacion de numeros enteros y flotantes
	f3 = n1 + f1 - n2 / 2.0 + f2 * 1.5;
	cout << "resultado operacion mixta enteros y flotantes: " << f3 << endl;

	// 9. Combinaciones mas complejas
	f3 = (n1 + f1) * (n2 - f2) / (n1 * f2);
	cout << "resultado operacion compleja" << f3 << endl;

	// 10. Operaciones aritmeticas de tipo mixto
	double d1 = 7.4;
	f3 = n1 + d1;
	cout << "resultadp suma double: " << f3 << endl;

	f3 = n2 - d1;
	cout << "resultado resta double: " << f3 << endl;

	f3 = d1 * f2;
	cout << "Resultado multiplicacion double: " << f3 << endl;

	f3 = d1 / f1;
	cout << "resutado division double: " << f3 << endl;

	// 11. Numeros negativos

	int negInt = -25;
	float negFloat = -12.3;

	n3 = n1 + negInt;
	cout << "resultado suma enteros positivo + negativo: " << n3 << endl;

	n3 = n2 + negInt;
	cout << "resultado suma enteros positivo + negativo: " << n3 << endl;

	f3 = negFloat - f2;
	cout << "resultado resta flotantes negativo - positivo: " << f3 << endl;

	n3 = negInt * n2;
	cout << "resultado resta flotantes negativo - positivo: " << n3 << endl;

	// 12. Incremento y decremento
	n1++;
	cout << "incremento en 1 a n1: " << n1 << endl;
	n2--;
	cout << "decremento en 1 a n2: " << n2 << endl;
	f1 += 2.5;
	cout << "Sumar 2.5 a f1: " << f1 << endl;
	f2 -= 1.2;
	cout << "restar 1.2 a f2: " << f2 << endl;



