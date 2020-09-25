#include "std_lib_facilities.h"

int main()
{
	cout << "Enter the name of the you want to write to:\n";
	string first_name;
	cin >> first_name;

	cout << "Dear " << first_name << ",\n";
	cout << "How are you?\nI am fine. I miss you.\n";
	cout << "Enter one of your friend name:\n";
	string friend_name;
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?" << endl;

	char friend_sex = 0;
	cout << "Please enter your friend sex.\n If he is a male write m and if she is a female write f.\n";
	cin >> friend_sex;
	if ( friend_sex == 'm')
	{
		cout << "If you see " << friend_name << " please ask him to call me." << endl;
	}
	else if(friend_sex == 'f')
	{
		cout << "If you see " << friend_name << " please ask her to call me." << endl;
	}

	int age;
	cout << "Enter your age: \n";
	cin >> age;
	if (age <= 0 || age >= 110)
	{
		simple_error("You're kidding!");
	}
	else
	{
	cout << "I hear you just had a birthday and you are " << age << " years old. \n";
	}

	if ( age < 12)
	{
		cout << "Next your you will be " << age + 1 << "." << endl;
	}
	else if (age == 17)
	{
		cout << "Next year you will be able to vote." << endl;
	}
	else if (age > 70)
	{
		cout << "I hope you enjoying retirement." << endl;
	}

	cout << "Your sincerely,\n\nKovács Ákos " << endl; 

	return 0;
}