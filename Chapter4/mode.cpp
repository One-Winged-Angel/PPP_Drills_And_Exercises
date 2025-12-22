#include "../std_lib_facilities.h"
using namespace std;

double count_mode(vector <double> v)
{
	double most_common{ 0 };
	int highest_count{ 0 };
	for (int i = 0; i < v.size(); i++)
	{
		int count = 0; //generate count
		for (int j = 0; j < v.size(); j++)
		{
			if (v[i] == v[j])
			{
				count++;
			}
		}
		if (count > highest_count)
		{
			highest_count = count;
			most_common = v[i];
		}
	}
	return most_common;
}

int main()
{
	cout << "Type in your temperatures separated by a space, once complete type 'm' to calculate mode";
	vector<double> temps;
	for (double temp; cin >> temp;)
	{
		temps.push_back(temp);
	}

	double mode = count_mode(temps);
	cout << "The mode is " << mode;

	return 0;
}