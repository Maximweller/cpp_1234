#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const double Anna_percent = 0.10;
	const double Boris_percent = 0.05;

	double Anna, Boris, Anna_profit;
	int i;

	cout << "Введите исходный баланс Анны: ";
	cin >> Anna;
	cout << "Введите исходный баланс Бориса: ";
	cin >> Boris;

	if ((Boris < 0) || (Anna < 0)) {
		cout << "Вы ввели отрицательное значение баланса!" << endl;
		system("pause");
		exit(0);
	}
	else if ((Boris == 0) || (Anna == 0)) {
		cout << "Вы ввели нулевой баланс!" << endl;
		system("pause");
		exit(0);
	}
	else if (Boris > Anna) {
		cout << "Баланс Бориса и так больше чем баланс Анны" << endl;
		system("pause");
		exit(0);
	}

	Anna_profit = Anna * Anna_percent;

	cout << "\n\n Год\t" << "\tБаланс Анны\t\tБаланс Бориса\n" << endl;
	for (i = 1; Boris <= Anna; ++i) {
		Anna += Anna_profit;
		Boris += Boris * Boris_percent;
		cout << " " << i << "\t\t" << Anna << "\t\t\t" << Boris << endl;
	}

	cout << "\n\n" << i - 1 << " лет необходимо, чтобы сумма баланса Бориса превысила сумму баланса Анны." << endl;
	system("pause");
	return 0;
}