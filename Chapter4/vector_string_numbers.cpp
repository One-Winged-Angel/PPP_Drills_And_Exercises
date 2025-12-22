#include "../std_lib_facilities.h"
using namespace std;

int main()
{
	vector <string> v = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

	cout << "Which number would you like the written form of: \n";
	string response;
	cin >> response;
	int selection = stoi(response);
	
	if (selection < 0 || selection > v.size())
	{
		cout << "The number must be in range";
	}

	else
	{
		cout << "You have selected the number " << v[(selection)] << endl;
	}
	






	return 0;
}