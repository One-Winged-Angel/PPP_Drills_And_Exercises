#include <string>
#include <iostream>
using namespace std;

int main()
{
	cout << "Welcome to the miles to Km conversion tool!\n"
		<< "Please input the distance in miles that you would like to convert:\n";

	double miles{ 0 };
	cin >> miles; // remember when you take in a new input a new line is generated

	cout << "The number of kilometres is " << miles * 1.609 << ".\n";
	cout << "Thank you for using our tool today";

	return 0;
}