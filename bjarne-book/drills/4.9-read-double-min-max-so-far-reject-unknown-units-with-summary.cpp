#include "../../std_lib_facilities.h"

int main() {
	double number;
	string unit;
	double minimum = -INFINITY;
	double maximum = INFINITY;
	bool is_first_time = true;

	int number_of_numbers = 0;
	int total = 0;

	string prompt = "Enter a floating point number followed by a unit (cm, m, in, ft): ";

	cout << prompt;

	while (cin >> number >> unit) {
		if (unit != "cm" || unit != "m" || unit != "in" || unit != "ft") {
			cout << "I don't know what unit this is. You entered: " << unit << ".\n";
		} else {
			if (unit == "cm") {
				number /= 100;
			} else if (unit == "in") {
				number /= 2.54 / 100;
			} else if (unit == "ft") {
				number /= 2.54 / 100 / 12;
			}

			if (is_first_time) {
				minimum = number;
				maximum = number;

				is_first_time = false;
			} else {
				minimum = min(number, minimum);
				maximum = max(number, maximum);
			}

			cout << "The smaller number so far is "<< minimum << unit << ".\n";
			cout << "The larger number so far is "<< maximum << unit << ".\n";
			cout << "You've entered "<< number_of_numbers << " numbers.\n";
			cout << "The average is " << total / number_of_numbers << ".\n";
		}

		cout << "\n" << prompt;
	}

	keep_window_open();

	return 0;
}
