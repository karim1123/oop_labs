#include <String>
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>


using namespace std;

class Methods {
public:
	virtual void meth(int arr[]) {
		cout << "Вывод чисел: " << endl;
		for (int i = 0; i < 20; i++) {
			if (arr[i] != 0) {
				cout << arr[i] << " ";
			}
		}
	}
};

class EvenNumbers : public Methods {
public:
	void meth(int arr[]) {
		cout << "Вывод чётных чисел: " << endl;
		for (int i = 0; i < 20; i++) {
			if (arr[i] % 2 == 0) {
				cout << arr[i] << " ";
			}
		}
	}
};

class OddNumbers : public Methods {
public:
	void meth(int arr[]) {
		cout << "Вывод нечётных чисел: " << endl;
		for (int i = 0; i < 20; i++) {
			if (arr[i] % 2 != 0) {
				cout << arr[i] << " ";
			}
		}
	}
};

class PositiveNumbers : public Methods {
public:
	void meth(int arr[]) {
		cout << "Вывод положительных чисел: " << endl;
		for (int i = 0; i < 20; i++) {
			if (arr[i] > 0) {
				cout << arr[i] << " ";
			}
		}
	}
};

class NegativeNumbers : public Methods {
public:
	void meth(int arr[]) {
		cout << "Вывод отрицательных чисел: " << endl;
		for (int i = 0; i < 20; i++) {
			if (arr[i] < 0) {
				cout << arr[i] << " ";
			}
		}
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");

	int arr[20] = {};

	cout << "Массив: ";
	srand(time(NULL));
	for (int i = 0; i < 20; i++) {
		arr[i] = rand() % 2000 - 1000;
		cout << arr[i] << " ";
	}
	cout << endl;

	int n = rand() % 4;

	switch (n) {
	case 0: {
		EvenNumbers  evnum;
		evnum.meth(arr);
	}
			break;
		case 1: {
			OddNumbers odnum;
			odnum.meth(arr);
		}
			break;
		case 2: {
			PositiveNumbers ponum;
			ponum.meth(arr);
		}
			break;
		case 3: {
			NegativeNumbers nenum;
			nenum.meth(arr);
		}
			break;
	}
}


