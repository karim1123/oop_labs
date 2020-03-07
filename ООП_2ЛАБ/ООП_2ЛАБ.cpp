#include <String>
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime>


using namespace std;

class EvenNumbers {
public:
	EvenNumbers() {
		int arr[20];
	}
	void meth(int arr[]) {
		cout << "Вывод  чётных чисел: ";
		for (int i = 0; i < 20; i++) {
			if (arr[i] % 2 == 0) {
				cout << arr[i] << " ";
			}
		}
	}
};

class OddNumbers {
public:
	OddNumbers() {
		int arr[20];
	}
	void meth(int arr[]) {
		cout << "Вывод нечётных чисел: ";
		for (int i = 0; i < 20; i++) {
			if (arr[i] % 2 != 0) {
				cout << arr[i] << " ";
			}
		}
	}
};

class PositiveNumbers {
public:
	PositiveNumbers() {
		int arr[20];
		string str = "";
	}
	void meth(int arr[]) {
		cout << "Вывод положительных чисел: ";
		for (int i = 0; i < 20; i++) {
			if (arr[i] > 0) {
				cout << arr[i] << " ";
			}
		}
	}
};

class NegativeNumbers {
public:
	NegativeNumbers() {
		int arr[20];
	}
	void meth(int arr[]) {
		cout << "Вывод отрицательных чисел: ";
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


