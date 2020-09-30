#include "std_lib_facilities.h"

int main()
{
	double a = 0;
	double b = 0;

	double recent_min = 0;
	double recent_max = 0;
	double min = 0;
	double max = 0;

	bool First_Round = true;

	while(cin >> a >> b)
	{
		cout << "Please enter 2 integer values!\n" << endl;
		cout << "a=" << a << "\nb=" << b << endl;

		if (a > b)	
		{
			cout << "The larger value is: " << a << endl; 
			cout << "The smaller value is: " << b << endl;
			recent_max = a;
			recent_min = b;
		}
		if (a < b)
		{
			cout << "The smaller value is: " << a << endl;
			cout << "The larger value is: " << b << endl;
			recent_max = b;
			recent_min = a;
		}
		if (a == b)
		{
			cout << "The numbers are equal!" << endl;
		}

		if(abs(a-b) <= 0.01)
		{
			cout << "The numbers almost equal!" << endl;
		}
		if (First_Round == true)
		{
			max= recent_max;
			min = recent_min;
			First_Round = false;
		}

		if (recent_min < min)
		{
			min=recent_min;
		}
		if (recent_max > max)
		{
			max= recent_max;
		}



		cout << "The smallest so far: " << min << "\n" << endl;
		cout << "The largest so far: " << max << "\n" << endl;	

	}

	

	return 0;
}