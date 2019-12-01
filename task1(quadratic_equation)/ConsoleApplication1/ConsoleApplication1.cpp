#include <iostream>
#include <cmath>
#include <Windows.h>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double a, b, c, d;
	double x, x1;
	string positive, negative, negative2;
	string a1, b1, c1;
	stringstream a2, b2, c2;
	int n = 1;
	double eps = 1.1e-15;
	
	cout << "Уравнение вида: a * x^2 + b * x + c = 0" << endl;
	cout << "Для нахождения корней, введите коэффиценты." << endl;
	cout << " " << endl;

	while (n == 1)
	{
		cout << "Введите значение a: ";
		cin >> a;
		cout << "Введите значение b: ";
		cin >> b;
		cout << "Введите значение c: ";
		cin >> c;
		positive = "+ ";
		negative = "- ";
		negative2 = "-";

		a1 = "";
		b1 = "";
		c1 = "";

		d = (b * b - 4 * a * c);

		if (((a > 0) || (a < 0)) && ((trunc(a) == a) || (ceil(a) == a))) {
			a2 << fixed << setprecision(0) << a;
			a1 = a2.str();
		}
		else if (((a > 0) || (a < 0)) && ((trunc(a) != a) && (ceil(a) != a))) {
			a2 << fixed << setprecision(2) << a;
			a1 = a2.str();
		}
		else if (a = 1) {
			a1 = " ";
		}
		else if (a = -1) {
			a1 = negative2;
		}
		if ((b > 0) && ((trunc(b) == b) || (ceil(b) == b))) {
			b2 << fixed << setprecision(0) << b;
			b1 = positive + b2.str();
		}
		else if ((b > 0) && ((trunc(b) != b) || (ceil(b) != b))) {
			b2 << fixed << setprecision(2) << b;
			b1 = positive + b2.str();
		}
		else if ((b < 0) && ((trunc(b) == b) || (ceil(b) == b))) {
			b2 << fixed << setprecision(0) << (-1) * b;
			b1 = negative + b2.str();
		}
		else if ((b < 0) && ((trunc(b) != b) || (ceil(b) != b))) {
			b2 << fixed << setprecision(2) << (-1) * b;
			b1 = negative + b2.str();
		}
		else if (b = 1) {
			b1 = positive;
		}
		else if (b = -1) {
			b1 = negative;
		}
		if ((c > 0) && ((trunc(c) == c) || (ceil(c) == c))) {
			c2 << fixed << setprecision(0) << c;
			c1 = positive + c2.str();
		}
		else if ((c > 0) && ((trunc(c) != c) || (ceil(c) != c))) {
			c2 << fixed << setprecision(2) << c;
			c1 = positive + c2.str();
		}
		else if ((c < 0) && ((trunc(c) == c) || (ceil(c) == c))) {
			c2 << fixed << setprecision(0) << (-1) * c;
			c1 = negative + c2.str();
		}
		else if ((c < 0) && ((trunc(c) != c) || (ceil(c) != c))) {
			c2 << fixed << setprecision(2) << (-1) * c;
			c1 = negative + c2.str();
		}

		if (fabs(d / (b * b)) < eps) {
			x = (-1 * b) / (2 * a);
			cout << "Корень = " << x << endl;
		}
		else if ((d > 0) && !(a == 0) && !(b == 0) && !(c == 0)) {
			cout << "Уравнение: " << a1 << " * x^2 " << b1 << " * x " << c1 << " = 0" << endl;
			x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
			x1 = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
			cout << "Первый корень = " << x << endl;
			cout << "Второй корень = " << x1 << endl;
		}
		else if ((d == 0) && !(a == 0) && !(b == 0) && !(c == 0)) {
			cout << "Уравнение: " << a1 << " * x^2 " << b1 << " * x " << c1 << " = 0" << endl;
			x = (-1 * b) / (2 * a);
			cout << "Корень = " << x << endl;
		}
		else if ((d < 0) && !(a == 0) && !(b == 0) && !(c == 0)) {
			cout << "Уравнение: " << a1 << " * x^2 " << b1 << " * x " << c1 << " = 0" << endl;
			cout << "Дискриминант меньше 0, корней нет!" << endl;
		}
		else if ((a == 0) && !(b == 0) && !(c == 0)) {
			cout << "Уравнение: " << b1 << " * x " << c1 << " = 0" << endl;
			x = ((-1 * c) / b);
			cout << "Корень = " << x << endl;
		}
		else if (!(a == 0) && (b == 0) && !(c == 0) && (((-1 * c) / a) >= 0)) {
			cout << "Уравнение: " << a1 << " * x^2 " << c1 << " = 0" << endl;
			x = (sqrt((-1 * c) / a));
			cout << "Первый корень = " << x << endl;
			cout << "Второй корень = " << -1 * x << endl;
		}
		else if (!(a == 0) && (b == 0) && !(c == 0) && (((-1 * c) / a) < 0)) {
			cout << "Уравнение: " << a1 << " * x^2 " << c1 << " = 0" << endl;
			cout << "Корней нет" << endl;
		}
		else if (!(a == 0) && !(b == 0) && (c == 0)) {
			cout << "Уравнение: " << a1 << " * x^2 " << b1 << " * x" << " = 0" << endl;
			cout << "Первый корень = 0" << endl;
			x = ((-1 * b) / a);
			cout << "Второй корень = " << x << endl;
		}
		else if ((a == 0) && (b == 0) && !(c == 0)) {
			cout << "Уравнение: " << c1 << " = 0" << endl;
			cout << "Корней нет, так как вы ввели нулевые коэффиценты для x" << endl;
		}
		else if ((a == 0) && !(b == 0) && (c == 0)) {
			cout << "Уравнение: " << b1 << " * x" << " = 0" << endl;
			cout << "Корень = 0" << endl;
		}
		else if (!(a == 0) && (b == 0) && (c == 0)) {
			cout << "Уравнение: " << a1 << " * x^2"<< " = 0" << endl;
			cout << "Корень = 0" << endl;
		}
		else if ((a == 0) && (b == 0) && (c == 0)) {
			cout << "Уравнение: " << "0 = 0" << endl;
			cout << "Корней нет, вы ввели нулевые a, b, c" << endl;
		}
		cout << "Продолжить? (1 = Да): ";
		cin >> n;
		cout << " " << endl;
	}
	return 0;
}