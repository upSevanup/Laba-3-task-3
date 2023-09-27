#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

/*лабораторная работа 3. Поливцев Михаил, ИВТ-31. Задание 3. индивидуальный вариант 16.
* вычислить значение функции y = f(x) при произвольных x.
*/

int main() {
	setlocale(LC_ALL, "ru");

	double a = 5.4, b = 5.3, x, y;

	cout << "Введите значение X >> ";
	cin >> x;

	if (x <= 0)
		y = log(fabs(x + sin(b * x)));
	else
		if (0 < x <= 12)
			y = cos(b * pow(x, 2)) + 0.5 * x;
		else
			y = sqrt(pow(a, 2) + pow(x, 2));

	cout << "y = " << y << endl;
}