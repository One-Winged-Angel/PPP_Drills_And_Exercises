#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Please enter a floating point value: ";
	int n;
	cin >> n;
	cout << "n == " << n
		<< "\nn + 1 == " << n + 1
		<< "\nthree times n == " << 3 * n
		<< "\ntwice n == " << n + n
		<< "\nn squared == " << n * n
		<< "\nhalf of n == " << n / 2 //as we are halving integer expect this to come out the remainder 
		<< "\nsquare root of n == " << sqrt(n)
		<< "\n";

	return 0;
}