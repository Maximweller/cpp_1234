#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double amount, num, summ, mean;

	cout << "Введите количество числовых значений: ";
	cin >> amount;

	if (amount < 0) {
		cout << "\nВы ввели отрицательное значение! Количество чисел должно быть положительным!" << endl;
		system("pause");
		exit(0);
	}
	else if (amount == 0) {
		cout << "\nВы ввели ноль!" << endl;
		system("pause");
		exit(0);
	}
	else if ((trunc(amount) != amount) || (ceil(amount) != amount)) {
		cout << "\nКоличество чисел не может быть вещественным!" << endl;
		system("pause");
		exit(0);
	}

	summ = 0;
	mean = 0;

	for (int i = 1; i <= amount; ++i) {
		cout << "\nВведите " << i << "ое число: ";
		cin >> num;
		summ += num;
		mean = summ / i;
		cout << "Среднее арифметическое введенных чисел = " << mean << endl;
	}

	system("pause");
	return 0;
}