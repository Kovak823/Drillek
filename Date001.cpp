#include "std_lib_facilities.h"

struct Date {
	int y, m, d;
};

void init_Date(Date& date, int y, int m, int d)
{
	if (y > 0)
	{
		date.y = y;
	}
	else
		error("Invalid year!");

	if (m <= 12 && m > 0)
	{
		date.m = m;
	}
	else
		error("Invalid month!");

	if (d > 0 && d <= 31)
	{
		date.d = d;
	}
	else
		error("Invalid day!");
}

void add_Day(Date& date, int n)
{
	date.d += n;
	if (date.d > 31)
	{
		date.m++;
		date.d -=31;
		if (date.m > 12)
		{
			date.y++;
			date.m -= 12;
		}
	}
}

int main()
try {

	Date today;
	today.y = 1978;
	today.m = 6;
	today.d = 25;
	init_Date(today, 1978, 6, 25);

	cout << "Date: " << today.y << '.' << today.m << '.' << today.d << endl;

	Date tomorrow;
	tomorrow = today;
	add_Day(tomorrow, 1);
	cout << "Date: " << tomorrow.y << '.' << tomorrow.m << '.' << tomorrow.d << endl;

	Date invalid{2004, 13, -5};
	init_Date(invalid, 2004, 13, -5);
	cout << "Date: " << invalid.y << '.' << invalid.m << '.' << invalid.d << endl;

	return 0;
} catch(exception& e)
{
	cout << e.what() << endl;
	return 1;
}