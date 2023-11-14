#include "../std_lib_facilities.h"

int main() {
	// init previous word
	string previous_word = " ";
	// Reseve current word
	string current_word;

	// read all newline separated input
	while (cin >> current_word) {
		// check if current word matches the previous word. a word is whitespace separated
		if (previous_word == current_word) {
			// show the user
			cout << "repeated word: " << current_word << "\n";
		}

		// update the previous word
		previous_word = current_word;
	}

	// return out
	return 0;
}
