#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const double tax1 = 0.00;
	const double tax2 = 0.10;
	const double tax3 = 0.15;
	const double tax4 = 0.20;

	double ebit, net;

	ebit = 0;

	cout << "Ваш личный помощник в подсчете налогов.\n" << endl;

	while (ebit >= 0)
	{
		cout << "\nВведите доход: ";
		cin >> ebit;

		net = ebit * tax1;

		if (ebit > 35000) {
			double rest = ebit - 35000;
			net += 10000 * tax2 + 20000 * tax3 + rest * tax4;
		}
		else if (ebit >= 15000) {
			double rest = ebit - 15000;
			net += 10000 * tax2 + rest * tax3;
		}
		else if (ebit >= 5000) {
			double rest = ebit - 5000;
			net += rest * tax2;
		}

		if (ebit >= 0) {
			cout << "\nСумма налога: " << net << " рублей;" << endl;
			if (ebit > 0) {
				cout << "Что составляет " << (net * 100) / ebit << " процент от вашего дохода;" << endl;
			}
			else if (ebit == 0) {
				cout << "Что составляет: 0" << " процентов от вашего дохода;" << endl;
			}
			cout << "Чистая прибыль: " << ebit - net << " рублей." << endl;
		}
	}

	cout << "\nВы ввели отрицательный доход!" << endl;
	system("pause");
	return 0;
}