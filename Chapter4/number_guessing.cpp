#include "../std_lib_facilities.h"
using namespace std;

int main()
{
	int low{ 1 };
	int high{ 100 };
	int guess{ 50 };
	while (low < high)
	{
		cout << "Is your number less than " << guess << "?  y/n\n";
		char response;
		cin >> response;
		if (response == 'y')
		{
			high = guess - 1;
			
		}
		else
		{
			low = guess;
		}
		guess = (low + high + 1) / 2;
	}
	
	cout << "Your number was " << low;
	




return 0;
}
