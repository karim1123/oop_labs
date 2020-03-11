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
		name = n;
		last_name = ln;
		middle_name = mn;
		age = a;
	}
	void set_age(int age) {
		if (age <= 0) {
			cout << "Некорректный возраст";
		}
		else {
			this->age = age;
		}
	}
	void set_name(string name) {
		if (name.length() > 20) {
			cout << "Некоректное имя";
		}
		else {
			this->name = name;
		}
	}
	void set_last_name(string last_name) {
		if (last_name.length() > 20) {
			cout << "Некоректная фамилия";
		}
		else {
			this->last_name = last_name;
		}
	}
	void set_middle_name(string middle_name) {
		if (middle_name.length() > 20) {
			cout << "Некоректное отчество";
		}
		else {
			this->middle_name = middle_name;
		}
	}
	int get_age() {
		return age;
	}
	string get_name() {
		return name;
	}
	string get_last_name() {
		return last_name;
	}
	string get_middle_name() {
		return middle_name;
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

