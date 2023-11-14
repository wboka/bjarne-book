#include "../../std_lib_facilities.h"

int main() {
	std::cout << "Enter distance in miles to convert into km: ";

	double miles;

	std::cin >> miles;

	std::cout << miles * 1.609 << " km";

	cout << "\n\nThanks for using my application.\n\nWayne\n\n\n";

	keep_window_open();

	return 0;
}
