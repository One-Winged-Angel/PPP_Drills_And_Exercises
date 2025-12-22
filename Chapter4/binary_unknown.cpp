#include "../std_lib_facilities.h"
using namespace std;

int main()

{
	int low{ 1 };
	int high{ 100 };
	

	while (low < high) //this must be the condition as the low and the high must be equal. Essentially they are converging ina binary manner to one number																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																		`````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````````																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																									
	{
		int guess{ (low + high + 1) / 2 };
		cout << "Is the number below " << guess << "? y/n\n";
		char response;
		cin >> response;
		if (response == 'y' || response == 'Y')
		{	
			high = guess - 1;
		}
		else
		{
			low = guess;
		}

		
	}

	cout << "Your number is " << low;
	return 0;
}