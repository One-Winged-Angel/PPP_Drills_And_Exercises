#include "../std_lib_facilities.h"
using namespace std;

vector<int> sieve(int n)
{
    vector<char> prime(n + 1, true);

    for (int p = 2; p * p <= n; ++p)
    {
        if (prime[p])
        {
            for (int i = p * p; i <= n; i += p)
            {
                prime[i] = false;
            }
        }
    }

    vector<int> res;
    for (int i = 2; i <= n; ++i)
    {
        if (prime[i])
            res.push_back(i);
    }

    return res;
}

int main()
{
    int num1;
    cout << "What number would you like to get the prime numbers up to?\n";
    cin >> num1;

    vector<int> primes = sieve(num1);

    for (int p : primes)
        cout << p << " ";

    cout << '\n';
    return 0;
}



