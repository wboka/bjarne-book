#include "../../std_lib_facilities.h"

int main()
{
	cout << "Enter the operation you want to perform (+, -, *, /, plus, minus, multiply, divide): ";

	string operation;

	cin >> operation;

	cout << "Enter a floating point number: ";

	double operand_1;

	cin >> operand_1;

	cout << "Enter a floating point number: ";

	double operand_2;

	cin >> operand_2;

	double result;

	if (operation == "+" || operation == "plus") {
		result = operand_1 + operand_2;
	} else if (operation == "-" || operation == "minus") {
		result = operand_1 - operand_2;
	} else if (operation == "*" || operation == "multiply") {
		result = operand_1 * operand_2;
	} else if (operation == "/" || operation == "divide") {
		result = operand_1 / operand_2;
	} else {
		error("I don't know how to do that. You tried \'" + operation + "\'");
	}

	if (result)
	{
		cout << result << "\n";
	}

	keep_window_open();

	return 0;
}
