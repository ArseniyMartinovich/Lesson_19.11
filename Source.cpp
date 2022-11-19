#include <iostream>
#include <ctime>
using namespace std;

int sign(double x) {
	if (x < 0) return -1;
	if (x == 0) return 0;
	if (x > 0) return 1;
}

int rootscount(double a, double b, double c) {
	int res = 0;
	double D;
	D = b * b - 4 * a * c;
	if (D < 0) return res = 0;
	if (D == 0) return res = 1;
	if (D > 0) return res = 2;
}

double circleS(double R) {
	double S;
	S = R * R * 3.14;
	return S;
}

double ringS(double R1, double R2) {
	double S, S1, S2;
	S1 = R1 * R1 * 3.14;
	S2 = R2 * R2 * 3.14;
	S = S1 - S2;
	return S;
}

double triangleP(double a, double h) {
	double b = (a / 2) * (a / 2) + h * h;
	return b + b + a;
}

int sumRange(int a, int b) {
	int sum = 0;
	if (a > b) return 0;
	for (int i = a; i <= b; i++)
		sum += i;
	return sum;
}

int main() {
	setlocale(LC_ALL, "rus");
	/*Proc16.Описать функцию sign(X) целого типа, возвращающую для вещественного числа X следующие значения :
	−1, если X < 0;
	0, если X = 0;
	1, если X > 0.
	С помощью этой функции найти значение выражения sign(A) + sign(B) для данных вещественных чисел A и B.*/

	/*double a, b;
	cin >> a >> b;
	cout << "a + b = " << sign(a) + sign(b) << endl;*/



	/*Proc17.Описать функцию rootscount(A, B, C) целого типа, определяющую количество корней квадратного уравнения
	A·x2 + B·x + C = 0 (A, B, C — вещественные параметры, A не = 0).
	С ее помощью найти количество корней для каждого из трех квадратных уравнений с данными коэффициентами.
	Количество корней определять по значению дискриминанта : D = B2 − 4·A·C.*/

	/*double a, b, c;
	cin >> a >> b >> c;
	int res = rootscount(a, b, c);
	cout << "Кол - во корней: " << res;*/



	/*Proc18.Описать функцию circleS(R) вещественного типа, находящую площадь круга радиуса R(R — вещественное).
	С помощью этой функции найти площади трех кругов с данными радиусами.Площадь круга радиуса R вычисляется по формуле
	S = π·R2.В качестве значения π использовать 3.14.*/
	
	/*for (int i = 1; i <= 3; ++i) {
		double R;
		cin >> R;
		cout << circleS(R) << endl;
	}*/
	


	/*Proc19.Описать функцию ringS(R1, R2) вещественного типа, находящую площадь кольца,
	заключенного между двумя окружностями с общим центром и радиусами R1 и R2(R1 и R2 — вещественные, R1 > R2).С ее помощью
	найти площади трех колец, для которых даны внешние и внутренние радиусы.
	Воспользоваться формулой площади круга радиуса R : S = π·R2.В качестве значения π использовать 3.14.*/
	/*for (int i = 1; i <= 3; i++) {
		double R1, R2;
		cin >> R1 >> R2;
		cout << ringS(R1, R2) << endl;
	}*/



	/*Proc20.Описать функцию triangleP(a, h), находящую периметр равнобедренного треугольника по его основанию a и высоте h,
	проведенной к основанию(a и h — вещественные).С помощью этой функции найти периметры трех треугольников,
	для которых даны основания и высоты. Для нахождения боковой стороны b треугольника использовать теорему Пифагора :
	b2 = (a / 2)2 + h2.*/

	/*for (int i = 1; i <= 3; i++) {
		double a, h;
		cin >> a >> h;
		cout << triangleP(a, h);
	}*/



	/*Proc21◦.Описать функцию sumRange(A, B) целого типа, находящую сумму всех целых чисел от A до B включительно(A и B — целые).
	Если A > B, то функция возвращает 0. С помощью этой функции найти суммы чисел от A до B и от B до C, если даны числа A, B, C.*/

	int a, b, c;
	cin >> a >> b >> c;
	cout << "Сумма всех целых чисел от A до B: " << sumRange(a, b) << "Сумма всех целых чисел от B до C: " << sumRange(b, c)
		<< endl;
	return 0;
}
















	return 0;
}