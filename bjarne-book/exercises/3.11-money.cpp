#include "../../std_lib_facilities.h"

int main() {
	int pennies = 0;
	int nickels = 0;
	int dimes = 0;
	int quarters = 0;
	int half_dollars = 0;

	string prompt_prefix = "How many ";
	string prompt_suffix = " do you have? ";
	string total_prefix = "You have ";

	cout << prompt_prefix << "pennies" << prompt_suffix;
	cin >> pennies;
	cout << prompt_prefix << "nickels" << prompt_suffix;
	cin >> nickels;
	cout << prompt_prefix << "dimes" << prompt_suffix;
	cin >> dimes;
	cout << prompt_prefix << "quarters" << prompt_suffix;
	cin >> quarters;
	cout << prompt_prefix << "half dollars" << prompt_suffix;
	cin >> half_dollars;

	cout << total_prefix << pennies << " pennies\n";
	cout << total_prefix << nickels << " nickels\n";
	cout << total_prefix << dimes << " dimes\n";
	cout << total_prefix << quarters << " quarters\n";
	cout << total_prefix << half_dollars << " half dollars\n\n";

	int total_amount;

	total_amount += pennies;
	total_amount += nickels * 5;
	total_amount += dimes * 10;
	total_amount += quarters * 25;
	total_amount += half_dollars * 50;

	string total_amount_in_dollars = to_string(total_amount / 100) + "." + to_string(total_amount % 100);

	cout << "The value of all of your coins is " << to_string(total_amount) << " cents or $" << total_amount_in_dollars << ".\n";

	keep_window_open();

	return 0;
}
