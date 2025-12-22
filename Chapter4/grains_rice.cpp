#include "../std_lib_facilities.h"
using namespace std;

int main()
{
	int rice_grains{ 1 };
	int total_grains = rice_grains;
	int square_count{ 1 }; 
	int rice_needed;
	cout << "How much rice do you want? \n";
	cin >> rice_needed;

	while (total_grains < rice_needed)
	{
		square_count++;
		rice_grains *= 2;
		total_grains += rice_grains;
	}

	cout << "It will take " << square_count << " squares to reach the rice needed";






	return 0;
}