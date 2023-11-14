#include "../../std_lib_facilities.h"

int main() {
	vector<string> words_to_sort;
	string word;

	cout << "Enter a word followed by a space or newline. Type 'stop()' to get the sorted order.\n";

	while(cin >> word) {
		if (word == "stop()") {
			break;
		}

		words_to_sort.push_back(word);
	}

	cout << "we have " << to_string(words_to_sort.size()) << " words to sort\n";

	sort(words_to_sort.begin(), words_to_sort.end());

	string message = "";

	for (auto sort_word : words_to_sort) {
		if (sort_word != words_to_sort.front()) {
			message += ", ";
		}

		message += to_string(sort_word);
	}

	cout << "The words you entered sorted are: " << message << ".\n";

	cout << "\n\nThanks for using my application.\n\nWayne\n\n\n";

	keep_window_open();

	return 0;
}
