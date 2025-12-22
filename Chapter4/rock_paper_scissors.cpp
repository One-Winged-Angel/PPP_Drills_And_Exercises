#include "../std_lib_facilities.h"
#include <ctime>
#include <cctype>
using namespace std;

int main()
{
	srand(time(nullptr));
	
	vector <string> opponent = { "rock", "paper", "scissors" };
	cout << "Lets play rock, paper, scissors\n";
	cout << "Which would you like to select? rock/paper/scissors?\n";
	string user_selection;
	cin >> user_selection;
	cout << "You have selected " << user_selection << endl;
	char first_letter = tolower(user_selection[0]); //gives the lower case first letter for use in switch statement 
	string opponent_selection = opponent[rand() % 3];


	switch (first_letter)
	{
	case 'r':
		if (opponent_selection == "rock")
		{
			cout << "Opponent selected rock, It's a draw!";
		}

		else if (opponent_selection == "paper")
		{
			cout << "Opponent selected paper, you lose!";
		}

		else if (opponent_selection == "scissors")
		{
			cout << "Opponent selected scissors, you win!";
		}		
		break;
	case 'p':
		if (opponent_selection == "rock")
		{
			cout << "Opponent selected rock, you win!";
		}

		else if (opponent_selection == "paper")
		{
			cout << "Opponent selected paper, it's a draw!";
		}

		else if (opponent_selection == "scissors")
		{
			cout << "Opponent selected scissors, you lose!";
		}
		break;
	case 's':
		if (opponent_selection == "rock")
		{
			cout << "Opponent selected rock, you lose!";
		}

		else if (opponent_selection == "paper")
		{
			cout << "Opponent selected paper, you win!";
		}

		else if (opponent_selection == "scissors")
		{
			cout << "Opponent selected scissors, it's a draw!";
		}
		break;

	
	default:
		break;
	}
	return 0;
}