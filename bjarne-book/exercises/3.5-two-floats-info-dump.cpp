#include "../../std_lib_facilities.h"

int main() {
	double value_1;
	double value_2;

	cout << "Enter a floating point value: ";
	cin >> value_1;

	cout << "Enter another floating point value: ";
	cin >> value_2;

	cout << max(value_1, value_2) << " is the largest value.\n";
	cout << min(value_1, value_2) << " is the smallest value.\n";

	cout << value_1 << " + " << value_2 << " = " << to_string(value_1 + value_2) << "\n";

	std::cout << value_1 << " - " << value_2 << " = " << to_string(value_1 - value_2) << "\n";
	std::cout << value_2 << " - " << value_1 << " = " << to_string(value_2 - value_1) << "\n";

	std::cout << value_1 << " * " << value_2 << " = " << to_string(value_1 * value_2) << "\n";

	if (value_2 != 0) {
		std::cout << value_1 << " / " << value_2 << " = " << (value_1 / value_2) << "\n";
	}

	if (value_1 != 0) {
		std::cout << value_2 << " / " << value_1 << " = " << (value_2 / value_1) << "\n";
	}

	cout << "\n\nThanks for using my application.\n\nWayne\n\n\n";

	keep_window_open();

	return 0;
}
