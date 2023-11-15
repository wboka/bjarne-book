#include "../../std_lib_facilities.h"

int main() {
	int int1;
	int int2;

	string prompt = "Enter 2 integers: ";

	cout << prompt;

	while (cin >> int1 >> int2) {
		cout << "int 1 is " << int1 << "\nint 2 is " << int2 << ".\n";

		cout << "The smaller integer is "<< min(int1, int2) << ".\n";
		cout << "The larger integer is "<< max(int1, int2) << ".\n";

		cout << "\n" << prompt;

	}

	keep_window_open();

	return 0;
}
