#include "../std_lib_facilities.h"
using namespace std;


int main()
{
	vector <string> v = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	string num_response;
	cout << "What number would you like? Please enter your number in word form (zero to nine):\n";
	cin >> num_response;

	bool found{ false };
	for (int i = 0; i < v.size(); i++)
	{
		if (num_response == v[i]) 
		{
			found = true;
			cout << "Your number is " << i;
			break; //need to stop looping only when we find the number!!
		}
		
		
	}

	if (!found)
	{
		cout << "Your number is not found, please check your number";
	}
	





}
