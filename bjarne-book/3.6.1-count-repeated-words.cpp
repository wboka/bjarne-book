#include "../std_lib_facilities.h"

int main() {
	// init number of words
	int number_of_words = 0;
	// init number of repeated word
	int number_of_repeated_words = 0;
	// init previous word
	string previous_word = " ";
	// Reseve current word
	string current_word;

	// read all newline separated input
	while (cin >> current_word) {
		++number_of_words;
		// check if current word matches the previous word. a word is whitespace separated
		if (previous_word == current_word) {
			++number_of_repeated_words;
			// show the user
			cout << "word number: " << number_of_words << "\trepeated word: " << current_word << "\n";
		}

		// update the previous word
		previous_word = current_word;
	}

	if (number_of_words > 0) {
		cout << number_of_repeated_words << " of " << number_of_words << " words were repeated.\n";
	}

	// return out
	return 0;
}
