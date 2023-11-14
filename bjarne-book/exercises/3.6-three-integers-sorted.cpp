#include "../../std_lib_facilities.h"

int main() {
	vector<int> numbers_to_sort;
	int number;

	cout << "Enter any integer value followed by the ENTER key. Type 'stop' to get the sorted order.\n";

	while(cin >> number) {
		numbers_to_sort.push_back(number);
	}

	cout << "we have " << to_string(numbers_to_sort.size()) << " numbers to sort\n";

	sort(numbers_to_sort.begin(), numbers_to_sort.end());

	string message = "";

	for (auto n : numbers_to_sort) {
		if (n != int(numbers_to_sort.front())) {
			message += ", ";
		}

		message += to_string(n);
	}

	cout << "The numbers you entered sorted are: " << message << ".\n";

	cout << "\n\nThanks for using my application.\n\nWayne\n\n\n";

	keep_window_open();

	return 0;
}
