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
	virtual void print() {
		cout << "Вывод чётных чисел: " << endl;
	}
	void meth(int arr[]) {
		for (int i = 0; i < 20; i++) {
			if (arr[i] % 2 == 0) {
				cout << arr[i] << " ";
			}
		}
	}
};

class OddNumbers : public EvenNumbers {
public:
	OddNumbers() {
		int arr[20];
	}
	void print() {
		cout << "Вывод нечётных чисел: " << endl;
	}
	void meth(int arr[]) {
		for (int i = 0; i < 20; i++) {
			if (arr[i] % 2 != 0) {
				cout << arr[i] << " ";
			}
		}
	}
};

class PositiveNumbers : public EvenNumbers {
public:
	PositiveNumbers() {
		int arr[20];
		string str = "";
	}
	void print() {
		cout << "Вывод положительных чисел: " << endl;
	}
	void meth(int arr[]) {

		for (int i = 0; i < 20; i++) {
			if (arr[i] > 0) {
				cout << arr[i] << " ";
			}
		}
	}
};

class NegativeNumbers : public EvenNumbers {
public:
	NegativeNumbers() {
		int arr[20];
	}
	void print() {
		cout << "Вывод отрицательных чисел: " << endl;
	}
	void meth(int arr[]) {
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
		evnum.print();
		evnum.meth(arr);
	}
			break;
		case 1: {
			OddNumbers odnum;
			odnum.print();
			odnum.meth(arr);
		}
			break;
		case 2: {
			PositiveNumbers ponum;
			ponum.print();
			ponum.meth(arr);
		}
			break;
		case 3: {
			NegativeNumbers nenum;
			nenum.print();
			nenum.meth(arr);
		}
			break;
	}
}


