#include "../std_lib_facilities.h"
using namespace std;

int main()
{
	string first_number;
	string second_number;
	double smallest{0};
	double largest{0};
	vector<double> vec = {};
	while (true)
	{
		cout << "Please enter the first number: \n";
		cin >> first_number;
		if (first_number == "|")
		{
			cout << "Program terminated";
			return 0;
		}

		cout << "Please enter the second number: \n";
		cin >> second_number;
		if (second_number == "|")
		{
			cout << "Program terminated";
			return 0;
		}
		double first_double{ stod(first_number) }; 
		double second_double{ stod(second_number) };
		
		


		if (first_double > second_double)
		{
			if (second_double < smallest)
			{
				smallest = second_double;
			}
			if (first_double > largest)
			{
				largest = first_double;
			}
			if ((first_double - second_double) <= 0.01 && (first_double - second_double) >= -0.01)
			{
				cout << "The numbers are almost equal\n";
			}
			cout << "The larger value is " << first_number << '\n';
			cout << "The smaller value is " << second_number << '\n';
			cout << "The smallest so far is " << smallest << "\n";
			cout << "The largest so far is " << largest << "\n";
		}

		else if (second_double > first_double)
		{
			if (first_double < smallest)
			{
				smallest = first_double;
			}
			if (second_double > largest)
			{
				largest = second_double;
			}
			if ((first_double - second_double) <= 0.01 && (first_double - second_double) >= -0.01)
			{
				cout << "The numbers are almost equal\n";
			}
			cout << "The larger value is " << second_number << '\n';
			cout << "The smaller value is " << first_number << '\n';
			cout << "The smallest so far is " << smallest << "\n";
			cout << "The largest so far is " << largest << "\n";
		}
		else
		{
			cout << "The number are equal!\n";
		}
		vec.push_back(first_double);
		vec.push_back(second_double);
		for (double i = 0; i < vec.size(); i++)
		{
			cout << "The values of the vector are " << vec[i] << " ";
		}
		cout << "\n";
	}




	return 0;
}