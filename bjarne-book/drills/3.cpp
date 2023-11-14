#include "../../std_lib_facilities.h"

int main() {
	string name = "Somebody";

	cout << "Who are you writing a letter to? ";

	cin >> name;

	string message = "Dear " + name + ",\n\nHow are you?\nI am fine.\nI miss you!\n\n";

	cout << "Who is a common friend? ";

	string shared_friend_name;

	cin >> shared_friend_name;

	message += "Have you seen " + shared_friend_name + " recently?\n";

	char shared_friend_gender = '0';

	while (shared_friend_gender != 'm' && shared_friend_gender != 'f') {
		cout << "Is your common friend 'm' for male or 'f' for female? ";

		cin >> shared_friend_gender;
	}

	message += "If you see " + shared_friend_name + ", please ask ";

	if (shared_friend_gender == 'm') {
		message += "him";
	} else if (shared_friend_gender == 'f') {
		message += "her";
	}

	message += " to call me.\n";

	int age;

	cout << "How old are you? ";

	cin >> age;

	if (age <= 0 || age >= 110) {
		error("I highly doubt that!!!");
	}

	message += "\nI hear you just had a birthday and you are " + to_string(age) + " years old.\n";

	if (age < 12) {
		message += "Next year you will be " + to_string(age + 1) + ".\n";
	} else if (age == 17) {
		message += "Next year you will be able to vote.\n";
	} else if (age > 70) {
		message += "I hope you are enjoying retirement.\n";
	}

	message += "\nYours sincerely,\n\nWayne";

	cout << message;

	return 0;
}
