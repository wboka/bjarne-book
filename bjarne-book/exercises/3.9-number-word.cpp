#include "../../std_lib_facilities.h"

int main() {
	int number;
	string greeting = "Please enter a number and I will spell it for you: ";

	cout << greeting;

	while (cin >> number) {
		string number_word = "Stupid computer";

		switch (number) {
			case 0:
				number_word = "zero";

				break;
			case 1:
				number_word = "one";

				break;
			case 2:
				number_word = "two";

				break;
			case 3:
				number_word = "three";

				break;
			case 4:
				number_word = "four";

				break;
			default:
				number_word = "Not a number I know";

				break;
		}

		cout << number_word << "\n" <<  greeting;
	}

	cout << "\n\nThanks for using my application.\n\nWayne\n\n\n";

	keep_window_open();

	return 0;
}
