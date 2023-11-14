#include "../std_lib_facilities.h"

int main() {
	string name = "???";
	double age = -1.0;

	cout << "Name: ";
	cin >> name;

	cout << "Age: ";
	cin >> age;

	cout << "Hello, " << name << "!" << endl;
	cout << "You are " << age << " years old." << endl;
	cout << "You are ~" << age * 12 << " months old." << endl;
	cout << "You are ~" << age * 12 * 365 << " days old." << endl;

	return 0;

}
