#include "../std_lib_facilities.h"
#include <cmath>
using namespace std;


int main()
{
	cout << "What number would you like to see the prime numbers up to?\n";
	int num1;
	cin >> num1;
	for (int i = 2; i <= num1 ; i++)
	{
		bool is_prime = true;
		for (int j= 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				is_prime = false;
				break;
			}
		}
		if (is_prime)
		{
			cout << i << " is a prime number.\n";
		}
	}







	return 0;
}
