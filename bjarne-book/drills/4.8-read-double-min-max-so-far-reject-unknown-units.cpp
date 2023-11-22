#include "../../std_lib_facilities.h"

int main() {
	double number1;
	string unit;
	double minimum = -INFINITY;
	double maximum = INFINITY;
	bool is_first_time = true;

	string prompt = "Enter a floating point number followed by a unit (cm, m, in, ft): ";

	cout << prompt;

	while (cin >> number1 >> unit) {
		if (unit != "cm" || unit != "m" || unit != "in" || unit != "ft") {
			cout << "I don't know what unit this is. You entered: " << unit << ".\n";
		} else {
			if (is_first_time) {
				minimum = number1;
				maximum = number1;

				is_first_time = false;
			} else {
				minimum = min(number1, minimum);
				maximum = max(number1, maximum);
			}

			cout << "The smaller number so far is "<< minimum << unit << ".\n";
			cout << "The larger number so far is "<< maximum << unit << ".\n";
		}

		cout << "\n" << prompt;
	}

	keep_window_open();

	return 0;
}
