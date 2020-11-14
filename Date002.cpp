#include "std_lib_facilities.h"

struct Date {
	int year, month, day;

	Date(int y, int m, int d);
	void add_Day(int n);
};

Date::Date(int y, int m, int d)
{
	if (y > 0)
	{
		year = y;
	}
	else
		error("Invalid year!");

	if (m <= 12 && m > 0)
	{
		month = m;
	}
	else
		error("Invalid month!");

	if (d > 0 && d <= 31)
	{
		day = d;
	}
	else
		error("Invalid day!");
}

void Date::add_Day(int n)
{
	day += n;
	if (day > 31)
	{
		month++;
		day -=31;
		if (month > 12)
		{
			year++;
			month -= 12;
		}
	}
}

int main()
try {

	Date today {1978, 6, 25};


	cout << "Date: " << today.year << '.' << today.month << '.' << today.day << endl;
	//today.add_Day(1);
	today.day++;
	cout << "Date: " << today.year << '.' << today.month << '.' << today.day << endl;

	Date invalid{2004, 13, -5};
	cout << "Date: " << invalid.year << '.' << invalid.month << '.' << invalid.day << endl;

	return 0;
} catch(exception& e)
{
	cout << e.what() << endl;
	return 1;
}