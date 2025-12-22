#include "../std_lib_facilities.h"
using namespace std;


string count_mode(vector<string> v)
{
	string most_common{ "null" };
	int highest_count{ 0 };
	for (int i = 0; i < v.size(); i++)
	{
		int count = 0;
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

string max_alphabetical(vector<string> v)
{
	string max{ " " };
	
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] > max)
		{
			max = v[i];
		}
	}

	return max;

}

string min_alphabetical(vector<string> v)
{
	string min{ " " };

	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] > min)
		{
			min = v[i];
		}
	}

	return min;

}




int main()
{
	cout << "Please type your strings separated by a space:\n";
	vector <string> words_given;
	for (string word; cin >> word;)
	{
		words_given.push_back(word);
	}
	
	string most_popular{ "not initialized yet" };
	string min_alpha{ "" };
	string max_alpha{ "" };
	
	most_popular = count_mode(words_given);
	cout << "Most common word is: " << most_popular << '\n';

	
	min_alpha = min_alphabetical(words_given);
	cout << "The max words alphabetically is " << min_alpha << "\n";


	max_alpha = max_alphabetical(words_given);
	cout << "The max words alphabetically is " << max_alpha << "\n";








	return 0;
}