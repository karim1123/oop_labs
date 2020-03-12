#include <iostream>
#include <String>

using namespace std;

class Person {
private:
	string name;
	string last_name;
	string middle_name;
	int age;
public:
	Person() {
		name = "";
		last_name = "";
		middle_name = "";
		age = 0;
	}
	Person(string n, string ln, string mn, int a) {
		if (n.length() > 20) {
			cout << "Некоректное имя" << endl;
		}
		else {
			this->name = n;
		}
		//////////////////////////////////////////////
		if (ln.length() > 20) {
			cout << "Некоректная фамилия" << endl;
		}
		else {
			this->last_name = ln;
		}
		//////////////////////////////////////////////
		if (mn.length() > 20) {
			cout << "Некоректное отчество" << endl;
		}
		else {
			this->middle_name = mn;
		}
		//////////////////////////////////////////////
		if (a <= 0) {
			cout << "Некорректный возраст" << endl;
		}
		else {
			this->age = a;
		}
	}
	void set_age(int age) {
			this->age = age;
	}
	void set_name(string name) {
			this->name = name;
	}
	void set_last_name(string last_name) {
			this->last_name = last_name;
	}
	void set_middle_name(string middle_name) {
			this->middle_name = middle_name;
	}
	int get_age() {
		if (age > 0) {
			return age;
		}
		else {
			cout << "Age: некоректный возраст" << endl;
		}
	}
	string get_name() {
		if (name.length() > 20) {
			cout << "Name: Некоректное имя" << endl;
		}
		else {
			return name;
		}
	}
	string get_last_name() {
		if (last_name.length() > 20) {
			cout << "Last Name: Некоректная фамилия" << endl;
		}
		else {
			return last_name;
		}
	}
	string get_middle_name() {
		if (middle_name.length() > 20) {
			cout << "Middle Name: Некоректное отчество" << endl;
		}
		else {
			return middle_name;
		}
	}
};

class Cashbox {
private:
	Person cashier;
	Person client;
	int cash_register_number;
public:
	Cashbox() {
		cash_register_number = 0;
	}
	Cashbox(Person person) {
		this->cashier = person;
		cash_register_number = 0;

	}
	void set_client(Person client) {
		if (client.get_name() == cashier.get_name() && client.get_last_name() == cashier.get_last_name() && client.get_middle_name() == cashier.get_middle_name()) {
			cout << "Client coincides with cashier";
		}
		else {
			this->client = client;
		}
	}
	int get_cash_register_number() {
		return cash_register_number;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");

	Person cashier("Karim", "Gabbasov", "Ramilevich", 19);
	cout << "Information about cashier:" << endl << endl;
	cout << "Name:" << cashier.get_name() << endl << "Last name:" << cashier.get_last_name() << endl << "Middle name:" << cashier.get_middle_name() << endl << "Age:" << cashier.get_age() << endl << endl;
	Person client("Igorek", "Kamashev", "Dmitrievich", 20);
	Cashbox cashbox(cashier);
	cashbox.set_client(client);
	cout << "Information about cashbox:" << endl << endl;
	cout << "1)Information about cashier:" << endl;
	cout << "Name:" << cashier.get_name() << endl << "Last name:" << cashier.get_last_name() << endl << "Middle name:" << cashier.get_middle_name() << endl << "Age:" << cashier.get_age() << endl;
	cout << "2)Information about client:" << endl;
	cout << "Name:" << client.get_name() << endl << "Last name:" << client.get_last_name() << endl << "Middle name:" << client.get_middle_name() << endl << "Age:" << client.get_age() << endl;
	cout << "3)Information about cash register number:" << endl;
	cout << cashbox.get_cash_register_number() << endl << endl;
	cashbox.set_client(cashier);
	cout << endl;
}

