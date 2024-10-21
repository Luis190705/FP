
//ejercicios con 1f
//1 Encontrar si un número es par o impar.

//2 Encontrar el mayor de dos números, solicita los dos números de tipo int.
#include <iostream>

using namespace std;
int main()
{
	int n1, n2;
	cout << "n1 : ";
	cin >> n1;
	cout << endl;
	cout << "n2 : ";
	cin >> n2;
	cout << endl;
	if (n1 < n2)
	{
		cout << "n1 : " <<
			n1 << endl;
	}
	else
	{
		cout << "n2 : " <<
			n2 << endl;
	}
}

//3 Solicitar la edad de la persona y si esta es mayor de edad, escribir en pantalla “Mayor de edad” de lo contrario “Menor de edad”

#include <iostream>

using namespace std;
int main()
{
	int edad;
	cout << "Ingresa tu edad: ";
	cin >> edad;
	if (edad >= 18)
	{
		cout << "Mayor de edad" << endl;
	}
	else
	{
		cout << "Menor de edad" << endl;
	}
}
//4 Solicitar la temperatura si esta es menor a 10 grados, escribir en pantalla “hace mucho frío”, si la temperatura es entre mayor a 10 grados y menor a 17 grados, escribir en pantalla “hace frío” y por último si es mayor a 17 grados, escribir en pantalla “el clima es templado”.
#include <iostream>

using namespace std;
int main()
{
	int temp;
	cout << "cual es la temperatura actual?: ";
	cin >> temp; // siempre que se usa cin se usa >>
	cout << endl;
	if (temp < 10)
	{
		cout << "Hace mucho frio " << endl;
	}
	if (temp >= 10 and temp <= 17)
	{
		cout << "Hace frio" << endl;
	}
	if (temp > 17)
	{
		cout << "templado " << endl;
	}
}
//5 Preguntar si al usuario si está a favor de la paz, guardar en una variable tipo char llamada voto, validar si el voto es ‘S’ o el voto es ‘N’ escribir en pantalla “voto valido” en caso de que sea cualquier otro carácter escribir, “voto invalido”
//6 Preguntar al usuario cuantas horas ha trabajado el empleado durante la semana, si, el empleado trabajo más de 40 horas, el excedente de horas se multiplicará por 75 pesos y publicar este cálculo en pantalla que será el bono del empleado.
//7 Crear dos variables de tipo int, que guarden el día y mes, del cumpleaños del usuario. Si la fecha corresponde a mes 9 y día 15, escribir en pantalla, “Feliz cumpleaños”
//8 Crear una variable que se llame velocidad, pregunta por este valor, si esta es negativa, escribir en pantalla “velocidad negativa”, si la velocidad es cero, escribir en pantalla “en reposo”, y si es positiva escribir en pantalla “velocidad positiva”.
//9 Crear las siguientes variables de tipo int: huevos, mantequilla, leche, harina, levadura, azucar y sal. Asigna valores aleatorios a cada variable, entre 1 y 5. Si todos los ingredientes tienen al menos un elemento, escribir en pantalla “Puedes crear hot cakes” de lo contrario escribir en pantalla “No hay suficientes ingredientes”
//10 Crear un programa en C++ que determine cuantos hot cakes se pueden hacer basado en la pregunta anterior.

