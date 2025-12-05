#include "PPP.h"
using namespace std;

// disgusting macro hack to guarantee range checking for []:
#define vector Checked_vector
#define string Checked_string
#define span Checked_span

int main()
{
	double age{};
	string first_name{}; 
	cout << "Please enter your first name and age?: \n";
	cin >> first_name;
	cin >> age;
	cout << "Hello " << first_name << " (Age: " << age * 12 << " months old)";


}