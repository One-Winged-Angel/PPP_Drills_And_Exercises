#include "../std_lib_facilities.h" //includes a custom header

using namespace std;

int main()
{
	int val1;
	int val2;
	int val3;
	cout << "Please enter value one: ";
	cin >> val1;
	cout << "Please enter value two: ";
	cin >> val2;
	cout << "Please enter value three: ";
	cin >> val3;
	int low{ val1 };
	int middle{ val2 };
	int high{ val3 };
	if (val1 < val2 && val1 < val3)
	{
		low = val1;
		if (val3 < val2)
		{
			middle = val3;
			high = val2;
		}
		else if (val2<val3)
		{
			middle = val2;
			high = val3;
		}
	}
	else if (val2 < val1 && val2 < val3)
	{
		low = val2;
		if (val1 < val3)
		{
			middle = val1;
			high = val3;
		}
		else if (val3 < val1)
		{
			middle = val3;
			high = val1;
		}
	}

	else if (val3 < val1 && val3 < val2)
	{
		low = val3;
		if (val2 < val1)
		{
			middle = val2;
			high = val1;
		}
		else if (val1<val2)
		{
			middle = val1;
			high = val2;
		}
	}

	cout << low << ", " << middle << ", " << high;





	return 0;
}