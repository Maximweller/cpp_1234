#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n = 1;

	while (n >= 0) {
		cout << "Введите число: ";
		cin >> n;
		double k = 1;
		
		for (int i = 1; i != n + 1; ++i) {
			k = k * i;
		}
		cout << "Факториал = " << k << "\n" << endl;
	}
	system("pause");
	return 0;
}