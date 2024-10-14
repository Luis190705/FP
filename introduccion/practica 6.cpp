#include <iostream>

using namespace std;

int main()
{
	//enteros
	int n1 = 10;
	int n2 = 20;

	//floats
	float f1 = 1.5;
	float f2 = 5.2;

	cout << boolalpha; // imprime en ligar de 1

	// Operaciones con desigualdad, comparaciones, magnitud

	//1. Igualdad
	cout << "(n1 == n2): " << (n1 == n2) << endl;
	cout << "(f1 == f2): " << (f1 == f2) << endl;

	//2. desigualdad
	cout << "(n1 != n2): " << (n1 != n2) << endl;
	cout << "(f1 != f2): " << (f1 != f2) << endl;

	//3. Mayor que
	cout << "(n1 > n2): " << (n1 > n2) << endl;
	cout << "(f1 > f2): " << (f1 > f2) << endl;

	//4. Menor que
	cout << "(n1 < n2): " << (n1 < n2) << endl;
	cout << "(f1 < f2): " << (f1 < f2) << endl;

	//5.Mayor o igual que

	cout << "(n1 >= n2): " << (n1 >= n2) << endl;
	cout << "(f1 >= f2): " << (f1 >= f2) << endl;

	//6. Menor o igual que
	cout << "(n1 <= n2): " << (n1 <= n2) << endl;
	cout << "(f1 <= f2): " << (f1 <= f2) << endl;

	//7. Comparaciones de tipos mixtos
	cout << "(n1 >= f2): " << (n1 >= f2) << endl;
	cout << "(f1 <= n2): " << (f1 <= n2) << endl;

	//8. Valores negativos
	cout << "(n1 > -n2): " << (n1 > -n2) << endl;
	cout << "(f1 > -f2): " << (f1 > -f2) << endl;


	//9. Combinacion de comparaciones
	// Puedes usar la palabra and en lugar de &&
	// Puedes usar la palabra or en ligar de ||
	cout << "((n1 < n2) && (f1 > f2)): " << ((n1 < n2) && (f1 > f2)) << endl;
	cout << "((n1 == 10) || (f1 == 5.2)): " << ((n1 == 10) || (f1 == 5.2)) << endl;

	//10. Comparaciones
	cout << "(n1 > n2 - 10): " << (n1 > n2 - 10) << endl;
	cout << "(f1 <= f2 + 10.5): " << (f1 <= f2 + 10.5) << endl;

	//11. Comparacion con constantes
	cout << "(n1 == 10): " << (n1 == 10) << endl;
	cout << "(f1 == 5.2): " << (f1 == 5.2) << endl;

	//12. Comparacion con los resultados de las operaciones aritmeticas
	cout << "((n1 + n2) < (f1 * f2))" << ((n1 + n2) < (f1 * f2)) << endl;
	cout << "((n1 - n2) >= (f1 / f2))" << ((n1 - n2) >= (f1 / f2)) << endl;

	//13. Comparacion de resultados negativos y positivos
	cout << "((-n1) < n2)): " << ((-n1) < n2) << endl;
	cout << "((-f1) > f2)): " << ((-f1) > f2) << endl;

	//14. Combinacion de aritmeticas y comparacion
	cout << "((n1 * n2) > (f1 - f2)): " << ((n1 * n2) > (f1 - f2)) << endl;
	cout << "((n1 / n2) <= (f1 + f2)): " << ((n1 / n2) <= (f1 + f2)) << endl;

	//15. Comparaciones encadenadas
	cout << "(n1 < n2 and n2 < f1): " << (n1 < n2 and n2 < f1) << endl;
	cout << "(f2 > f1 and f1 > n1): " << (f2 > f1 and f1 > n1) << endl;

	//16. Comparacion de modulos
	cout << "((n2 % n1) == 0): " << ((n2 % n1) == 0) << endl;

	// Operadores Logicos
	bool p = true, q = false;


	//17. Logico AND
	cout << "(p and q): " << (p and q) << endl;

	//18. OR Logico
	cout << "(p or q): " << (p or q) << endl;

	//19 Logico NOT
	//puedes usar la palabra not en ligar de !
	cout << "(!p): " << (not (p)) << endl;

	//20. Combinacion de AND NOT
	cout << "(p and not (q)): " << (p and not(q)) << endl;

	//21. Double NOT
	cout << "(not(not(q))): " << (not(not(q))) << endl;

	//22. Operaciones mixtas
	cout << "(not (p and q) or (p or not (q))): " << (not (p and q) or (p or not (q))) << endl;

	//23. Asignacion de variables con operadores logicos
	bool a = p and q;
	cout << "Valor asignado a variable 'a': " << a << endl;

	//24 Operaciones logicas con numeros enteros (distinto de 0 es verdadero, cero es falso)
	int x = 5, y = 0;
	cout << "(x and y): " << (x and y) << endl;

	//25 . Operaciones logicas con tipos de datos mixtos 
	float m = 3.5, n = 0.0;
	cout << "(m or n): " << (m or n) << endl;

	//26. Expresiones complejas
	cout << "((p or q) and (x or n)): " << ((p or q) and (x or n)) << endl;

	//27. Expresiones anidadas
	cout << "((x and not (y)) and (m ir not(q)): " << ((x and not(y)) and (m or not(q))) << endl;

	//28 Operaciones logicas con numeros de punto flotante
	cout << "((m > n) and (m <== 3.5)): " << ((m > n) and (m <= 3.5)) << endl;

	//29 Uso de operacdores logicos con comparacion de cadenas de texto (string)
	string strl = "hola", str2 = "mundo";
	cout << "((strl == str2) or (strl != str2)): " << ((strl == str2) or (strl != str2) << endl;

