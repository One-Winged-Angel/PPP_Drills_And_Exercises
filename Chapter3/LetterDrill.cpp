#include <string>
#include <iostream>
#include "std_lib_facilities.h"

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
	if (friend_sex == 'm')
	{
		cout << "if you see " << friend_name << ", can you ask him to call me?\n";
	}
	else
	{
		cout << "if you see " << friend_name << ", can you ask her to call me?\n";
	}

	cout << "How old is the person receiving this letter?\n ";
	int age{};
	cin >> age;
	while (age < 1 || age > 110)
	{
		simple_error("You're kidding, How old are you really?\n");
		cin >> age;
	}
	cout << "I hear you have just had a Birthday and you're " << age << " years old.\n";
	if (age < 12)
	{
		cout << "Next year you will be " << age + 1 << "!\n\n";
	}

	else if (age == 17)
	{
		cout << "Next year you will be able to vote.\n\n";
	}
	else if (age > 70)
	{
		cout << "I hope you are enjoying retirement!\n\n";
	}
	cout << "Yours Sincerely\n\n";

	cout << "Daniel";


	return 0;
}