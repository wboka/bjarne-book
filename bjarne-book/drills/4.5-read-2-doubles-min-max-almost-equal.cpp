#include "../../std_lib_facilities.h"

int main() {
	double number1;
	double number2;

	string prompt = "Enter 2 floating point numbers: ";

	cout << prompt;

	while (cin >> number1 >> number2) {
		cout << "number 1 is " << number1 << "\nnumber 2 is " << number2 << ".\n";

		cout << "The smaller integer is "<< min(number1, number2) << ".\n";
		cout << "The larger integer is "<< max(number1, number2) << ".\n";

		double tolerance = 1.0 / 10000000;

		if (number1 == number2) {
			cout << number1 << " is equal to " << number2 << "\n";
		} else if (abs(number1 - number2) <= tolerance) {
			cout << number1 << " is ALMOST equal to " << number2 << "\n";
		}

		cout << "\n" << prompt;

	}

	keep_window_open();

	return 0;
}
