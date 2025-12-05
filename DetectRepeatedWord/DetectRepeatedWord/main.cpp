#include <iostream>
#include <string>

using namespace std;

int main()
{
	string previous{ "" };
	string current;
	int number_of_words{};
	while (cin>>current) // can use this to keep taking in an input until if statement below is met
	{
		++number_of_words;
		if (previous == current) 
		{
			cout << "Word number: " << number_of_words  
				<< " Repeated word: " << current << "\n";
			
		}
		previous = current;
	}
	return 0;
}