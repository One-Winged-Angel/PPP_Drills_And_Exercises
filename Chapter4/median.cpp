#include "../std_lib_facilities.h"
using namespace std;

int main()
{
	vector<double> temps;
	for (double temp; cin>>temp;)
	{
		temps.push_back(temp);
	}
	
	if (temps.size() % 2 == 1)
	{
		sort(temps.begin(), temps.end());
		int index = temps.size() / 2;
		cout << temps[index] <<'\n';
	}

	else
	{
		int mid = temps.size() / 2; 
		//if even sized vector e.g. 6 we need 3rd and 4th values, temps.size() gets us the 3rd, +1 gets us the fourth
		cout << (temps[mid - 1] + temps[mid]) / 2; //we can then add the two values together and find the middle

	}
	




	return 0;
}