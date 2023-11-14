#include "../../std_lib_facilities.h"

int main() {
	int number;
	string greeting = "Please enter a number and I will tell you if it is even or odd: ";

	cout << greeting;

	while (cin >> number) {
		if (number % 2 == 0) {
			cout << "the number " << number << " is even.\n";
		} else {
			cout << "the number " << number << " is odd.\n";
		}

		cout << greeting;
	}

	cout << "\n\nThanks for using my application.\n\nWayne\n\n\n";

	keep_window_open();

	return 0;
}
