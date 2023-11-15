#include "../../std_lib_facilities.h"

int main() {
	double number1;
	double minimum = -INFINITY;
	double maximum = INFINITY;
	bool is_first_time = true;

	string prompt = "Enter a floating point number: ";

	cout << prompt;

	while (cin >> number1) {
		if (is_first_time) {
			minimum = number1;
			maximum = number1;

			is_first_time = false;
		} else {
			minimum = min(number1, minimum);
			maximum = max(number1, maximum);
		}

		cout << "The smaller number so far is "<< minimum << ".\n";
		cout << "The larger number so far is "<< maximum << ".\n";

		cout << "\n" << prompt;
	}

	keep_window_open();

	return 0;
}
