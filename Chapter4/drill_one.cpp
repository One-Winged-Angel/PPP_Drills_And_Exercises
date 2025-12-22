#include "../std_lib_facilities.h"
using namespace std;

int main()
{
	string num1;
	string num2;

	while (true)
	{
		cout << "What is the first integer?\n";
		cin >> num1;
		if (num1 == "|")
		{
			cout << "Program terminated!";
			return 0;
		}
		cout << "What is the second integer?\n";
		cin >> num2;
		if (num2 == "|")
		{
			cout << "Program terminated!";
			return 0;
		}
		cout << "The first integer is " << num1 << " and the second integer is " << num2 << "\n\n";

	}

	return 0;
}