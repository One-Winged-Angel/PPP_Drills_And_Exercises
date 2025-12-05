#include <string>
#include <iostream>

using namespace std;

int main()
{
	cout << "Enter name of the person you want to write to: ";
	string first_name{};
	cin >> first_name;
	cout << "Dear " << first_name << ",\n";
	cout << "	 " << "How are you? I am fine. I miss you.\n";
	cout << "Please type the name of another friend you would like to discuss:\n";
	string friend_name{ };
	cin >> friend_name;
	cout << "What gender is your friend, type m or f:\n";
	char friend_sex;
	cin >> friend_sex;
	cout << "Have you seen " << friend_name << " lately?\n";
	if (friend_sex=='m')
	{
		cout << "if you see " << friend_name << ", can you ask him to call me?";
	}
	else
	{
		cout << "if you see " << friend_name << ", can you ask her to call me?";
	}

	



	return 0;
}