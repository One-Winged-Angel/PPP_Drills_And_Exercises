#include "../std_lib_facilities.h"
using namespace std;

int main()
{
	string val1;
	cout << "Enter the first string value: ";
	cin >> val1;

	string val2;
	cout << "Enter the second string value: ";
	cin >> val2;

	string val3;
	cout << "Enter the third string value: ";
	cin >> val3;

	string first{ val1 };
	string second{ val2 };
	string third{ val3 };

	if (val1 <= val2 && val1 <= val3)
	{
		first = val1;
		second = val2;
		third = val3;
		if (val3 <= val2)
		{
			second = val3;
			third = val2;

		}
		
	}

	
	else if (val2 <= val1 && val2 <= val3)
	{
		first = val2;
		if (val1 <= val3)
		{
			second = val1;
			third = val3;
			
		}
		else if (val3 < val1)
		{
			second = val3;
			third = val1;
		}
	}

	else if (val3 <= val1 && val3 <= val2)
	{
		first = val3;
		if (val1 <= val2)
		{
			second = val1;
			third = val2;
		}
		else if (val2 < val1)
		{
			second = val2;
			third = val1;
		}
	}

	cout << first << ", " << second << ", " << third;

	return 0;
}