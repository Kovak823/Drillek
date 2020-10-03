#include "std_lib_facilities.h"

int main()
{
	constexpr double m_to_cm = 100;
	constexpr double in_to_cm = 2.54;
	constexpr double ft_to_in = 12;

	double length = 1;
	char unit = ' ';
	cout << "Please enter a value!\nAnd next please write 'm' or 'i' or 'f' " << endl;
	cin >> length >> unit;
	if (unit == 'm')
	{
		cout << m_to_cm * length << " cm" << endl;
	}
	else if (unit == 'i')
	{
		cout << in_to_cm * length << " cm" << endl;
	}
	else if (unit == 'f')
	{
		cout << ft_to_in * length << " in" << endl;
	} 
	else
	{
		cout << "Please enter a accpeted unit!" << endl;
	}
	


	return 0;
}