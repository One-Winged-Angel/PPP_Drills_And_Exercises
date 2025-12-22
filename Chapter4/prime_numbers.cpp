#include "../std_lib_facilities.h"
#include <cmath>
using namespace std;

int main()
{
	vector <int> primes = {};
	for (int i = 2; i <= 100; i++)
	{
		bool is_prime = true;
		
		for (int j = 2; j <= sqrt(i); j++) 
		{
			if (i % j == 0)
			{
				is_prime = false;
				break;
			}
		}

		if (is_prime)
		{
			primes.push_back(i);
		}
	}

	

	for (auto prime : primes)
	{
		cout << prime << " is a prime number. \n";
	}




	return 0;
}