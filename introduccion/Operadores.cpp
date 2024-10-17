// Operaciones Aritméticas

// Enteros
int a = 10;
int b = 20;
int c;

//Flotantes
flotador x = 15,5;
flotación y = 5,2;
flotador z;

// 1.Adición
c = a + b; // 30
z = x + y; // 20.7

//2. Sustracción
c = a - b; // -10
z = x - y; // 10.3

//3. Multiplicación
c = a * b; // 200
z = x * y; // 80.6

//4. División
c = b / a; // 2
z = x / y; // 2.98077

//5. Módulo (resto de la división)
c = b % a; // 0

//6. Operaciones mixtas
z = a + x; // 25.5
z = b - y; // 14.8
z = a * y; // 52.0
z = b / x; // 1.29032
z = (a + b) * x / y; // 86.5385

//7. Más ejemplos con flotadores
z = x + 10,3; // 25.8
z = y * 2,5; // 13.0
z = x / 2,0; // 7.75
z = y - 3,2; // 2.0

//8. Combinación de números enteros y flotantes
z = a + x - b / 2,0 + y * 1,5; // 23.8

//9. Combinaciones más complejas
z = (a + x) * (b - y) / (a * y); // 1.12308

//10. Operaciones aritméticas de tipo mixto
doble d = 7,4;
z = a + d; // 17.4
z = b - d; // 12.6
z = d * y; // 38.48
z = d / x; // 0.477419

//11. Números negativos
int negInt = -25;
float negFloat = -12.3;

c = a + negInt; // -15
c = b + negFloat; // 7.7
z = negFloat - y; // -17.5
z = negInt * b; // -500

//12. Incremento y decremento
A++; // 11
b--; // 19
x += 2,5; // 18.0
y -= 1,2; // 4.0


// Operaciones con Desigualdades, Comparaciones, Magnitud
// 1. Igualdad
cout << (a == b) << endl;
cout << (x == y) << endl;

// 2. Desigualdad
cout << (a != b) << endl;
cout << (x != y) << endl;

// 3. Mayor que
cout << (a > b) << endl;
cout << (x > y) << endl;

// 4. Menos que
cout << (a < b) << endl;
cout << (x < y) << endl;

// 5. Mayor o igual que
cout << (a >= b) << endl;
cout << (x >= y) << endl;

// 6. Menor o igual que
cout << (a <=b) << endl;
cout << (x <= y) << endl;

// 7. Comparaciones de tipos mixtos
cout << (a > y) << endl;
cout << (x < b) << endl;

// 8. Valores negativos
cout << (a > -b) << endl;
cout << (x < -y) << endl;

// 9. Combinación de comparaciones
cout << ((a < b) && (x > y)) << endl;
cout << ((a == 10) || (x == 5,2)) << finl;

// 10. Comparaciones anidadas
cout << (a > b - 10) << endl;
cout << (x <= y + 10.3) << endl;

// 11. Comparación con constantes
cout << (a == 10) << endl;
cout << (y == 5.2) << endl;

// 12. Comparación con los resultados de las operaciones aritméticas
cout << ((a + b) < (x * y)) << endl;
cout << ((b - a) >= (x / y)) << endl;

// 13. Comparación de resultados negativos y positivos
cout << (-a) < b) << endl;
cout << ((-x) > y) << endl;

// 14. Combinación de aritmética y comparación
cout << ((a * b) > (x - y)) << endl;
cout << ((b / a) <= (x + y)) << endl;

// 15. Comparaciones encadenadas
cout << (a < b & & b < x) << endl;
cout << (y > x && x > a) << endl;

// 16. Comparación de módulos
cout << ((b % a) == 0) << endl;

// 17. Comparaciones dentro del bucle (propósito de demostración)
for (int i = 0; i < 5; i++) {
cout << (y < a) << " ";
}
cout << endl;

// 18. Resultados de la comparación en la inicialización de matrices
int resultados[5] = { a < b, a == 10, x != y, x >= y, b > 10 };
for (int i = 0; i < 5; i++) {
cout << resultados[i] << " ";


// Operadores Lógicos
 bool a = verdadero, b = falso;

// 1. Lógico AND
cout << (A & & B) << endl;

// 2. Quirófano lógico
cout << (a || b) << endl;

// 3. Lógico NO
cout << (!a) << endl;

// 4. Combinación de AND y OR
cout << (a & & !b) << endl;

// 5. Combinación de OR y NOT
cout << (a || !b) << endl;

// 6. Doble NO
cout << (!! b) << final;

// 7. Operaciones mixtas
cout << (!( A y B) || (a || !b)) << finl;

// 8. Asignación de variables con operadores lógicos
bool c = a & & b;
cout << c << endl;

// 9. Operaciones lógicas con números enteros (distinto de cero es verdadero, cero es falso)
int x = 5, y = 0;
cout << (x & & y) << endl;

// 10. Operaciones lógicas con tipos de datos mixtos
flotador m = 3,5, n = 0,0;
cout << (m || n) << endl;

// 11. Expresiones complejas
cout << ((a || b) && (x || n)) << endl;

// 12. Operaciones lógicas anidadas
cout << ((x & !y) && (m || !b)) << endl;

// 13. Uso de operadores lógicos en bucles
for (int i = 0; i < 5; i++) {
cout << (y & (y % 2 == 0)) << " ";
}
cout << endl;

// 14. Operaciones lógicas con matrices
bool arr[5] = { a & b, a || b, !a, x & y, m || n };
for (int i = 0; i < 5; i++) {
cout << arr[i] << " ";
}
cout << endl;

// 15. Operaciones lógicas con números de punto flotante
cout << ((m > n) && (m <= 3.5)) << endl;

// 16. Uso de operadores lógicos con comparación de cadenas
cadena str1 = "hola", str2 = "mundo";
cout << ((str1 == str2) || (str1 != str2)) << finl;

// 17. Combinación de operadores lógicos con operaciones aritméticas
cout << ((x + y > m - n) && (a || b)) << endl;

// 18. Operaciones lógicas con operador ternario (evalúa pero no usa 'if')
Resultado bool = (x > y) ? A & & B : A || b;
cout << resultado << endl;

// 19. Operaciones lógicas con operadores bit a bit
int bit a bitY = x e y;
int bit a bitO = x | y;
cout << (bitwiseAnd & bitwiseOr) << endl;

// 20. Encadenamiento de operadores lógicos
cout << (a & & b || !a & !b) << endl;

cout << "¡Operaciones lógicas realizadas!" << endl;
devuelve 0;


//17/10/2024
//MAGNITUD DE OPERADORES



// Enteros
	int n1 = 10;
	int n2 = 20;

	// Floats
	float f1 = 1.5;
	float f2 = 5.2;

	cout << boolalpha; // Imprime ture en lugar de 1

	// Operaciones con desigualdad, comparaciones, magnitud

	// 1. Igualdad
	cout << "(n1 == n2): " << (n1 == n2) << endl;
	cout << "(f1 == f2): " << (f1 == f2) << endl;

	// 2. Desigualdad
	cout << "(n1 != n2): " << (n1 != n2) << endl;
	cout << "(f1 != f2): " << (f1 != f2) << endl;

	// 3. Mayor que
	cout << "(n1 > n2): " << (n1 > n2) << endl;
	cout << "(f1 > f2): " << (f1 > f2) << endl;

	// 4. Menor que
	cout << "(n1 < n2): " << (n1 < n2) << endl;
	cout << "(f1 < f2): " << (f1 < f2) << endl;

	// 5. Mayor o igual que
	cout << "(n1 >= n2): " << (n1 >= n2) << endl;
	cout << "(f1 >= f2): " << (f1 >= f2) << endl;

	// 6. Menor o igual que
	cout << "(n1 <= n2): " << (n1 <= n2) << endl;
	cout << "(f1 <= f2): " << (f1 <= f2) << endl;

	// 7. Comparaciones de tipos mixtos
	cout << "(n1 > f2): " << (n1 > f2) << endl;
	cout << "(f1 < n2): " << (f1 < n2) << endl;

	// 8. Valores negativos
	cout << "(n1 > -n2): " << (n1 > -n2) << endl;
	cout << "(f1 < -f2): " << (f1 < -f2) << endl;

	// 9. Combinación de comparaciones
	// Puedes usar la palabra and en lugar de &&
	// Puedes usar la palabra or en lugar de ||
	cout << "((n1 < n2) && (f1 > f2)): " << ((n1 < n2) && (f1 > f2)) << endl;
	cout << "((n1 == 10) || (f1 == 5.2)): " << ((n1 == 10) || (f1 == 5.2)) << endl;

	// 10. Comparaciones anidadas
	cout << "(n1 > n2 - 10): " << (n1 > n2 - 10) << endl;
	cout << "(f1 <= f2 + 10.5): " << (f1 <= f2 + 10.5) << endl;

	// 11. Comparacón con constantes
	cout << "(n1 == 10): " << (n1 == 10) << endl;
	cout << "(f1 == 5.2): " << (f1 == 5.2) << endl;

	// 12. Compración con los resultados de las operaciones aritméticas
	cout << "((n1 + n2) < (f1 * f2)): " << ((n1 + n2) < (f1 * f2)) << endl;
	cout << "((n1 + n2) >= (f1 / f2)): " << ((n1 - n2) >= (f1 / f2)) << endl;

	// 13. Comparación de resultados negativos y positivos
	cout << "((-n1) < n2): " << ((-n1) < n2) << endl;
	cout << "((-f1) > f2): " << ((-f1) < f2) << endl;

	// 14. Combinación de aritméticas y compración
	cout << "((n1 * n2) > (f1 - f2)): " << ((n1 * n2) > (f1 - f2)) << endl;
	cout << "((n2 / n1) <= (f1 + f2)): " << ((n2 / n1) <= (f1 + f2)) << endl;

	// 15. Comparaciones encadenadas
	cout << "(n1 < n2 and n2 < f1): " << (n1 < n2 and n2 < f1) << endl;
	cout << "(f2 > f1 and f1 > n1): " << (f2 > f1 and f1 > n1) << endl;

	//16. Compración de módulos
	cout << "((n2 % n1) == 0): " << ((n2 % n1) == 0) << endl;


