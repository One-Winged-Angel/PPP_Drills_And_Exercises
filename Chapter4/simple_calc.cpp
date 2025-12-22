#include "../std_lib_facilities.h"
using namespace std;

double add(double input_one, double input_two)
{
	double answer = input_one + input_two;
	return answer;

}


double subtract(double input_one, double input_two)
{
	double answer = input_one - input_two;
	return answer;
}

double multiply(double input_one, double input_two)
{
	double answer = input_one * input_two;
	return answer;
}

double divide(double input_one, double input_two)
{
	double answer = input_one / input_two;
	return answer;
}


int main()
{

	double num_1;
	cout << "What is your first number? \n";
	cin >> num_1;

	double num_2;
	cout << "What is your second number? \n";
	cin >> num_2;

	cout << "What operation would you like to perform? +, -,* or /? \n";
	char operation;
	cin >> operation;

	switch (operation)
	{
	case '+':
		cout << "The sum of " << num_1 << " and " << num_2 << " is " << add(num_1, num_2);
		break;
	case '-':
		cout << num_1 << " subtract " << num_2 << " is " << subtract(num_1, num_2);
		break;
	case '*':
		cout << "The product of " << num_1 << " and " << num_2 << " is " << multiply(num_1, num_2);
		break;
	case '/':
		cout << num_1 << " divided by " << num_2 << " is " << divide(num_1, num_2);
		break;
	default:
		break;
	}







	return 0;
}