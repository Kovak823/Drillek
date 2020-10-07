#include "std_lib_facilities.h"

int main()
{
	string a;
	string unit;
	vector<string> vunit;
	double number = 0;
	double sum = 0;
	vector<double> numbers;
	vector<double> vnumbers;
	while(a !="|")
	{
		cout << "You can exit the loop if u write | charachter." << endl;
		cout << "(If you contiune: first write a 'skip' word)"<< endl;
		cin >> a;
		if (a=="|")
		{
			break;
		}
	
		cout << "Please add a number: " << endl;
		cin >> number;
		numbers.push_back(number);
		cout << "And next please add an unit(m,cm,in,ft): " << endl;
		cin >> unit;
		if (unit == "m")
		{
			number = number;
			vnumbers.push_back(number);
		}
		if(unit == "cm")
        {
            number = number/100;
            vnumbers.push_back(number);
        }
        if (unit == "in")
        {
        	number = number*0.0254;
        	vnumbers.push_back(number);
        }
        if (unit == "ft")
        {
        	number = ((number*12)*2.54)/100;
        	vnumbers.push_back(number);
        }
    
	}
	if (vnumbers.size()>1)
	{
		cout << "The smallest value so far: " << *min_element(vnumbers.begin(), vnumbers.end()) << " m" << endl;
		cout << "The largest value so far: " << *max_element(vnumbers.begin(), vnumbers.end()) << " m" << endl;
	}
	sort(vnumbers);
	if(vnumbers.size()>1)
    {
        cout << endl  << "The sorted numbers:" << endl;
        for (int i = 0; i < vnumbers.size(); ++i)
        {
            cout << vnumbers[i] << " " << " m" <<endl;
        }
    }
	if(vnumbers.size()>1)
    {
        cout << endl  << "The sum of the numbers: ";
        for (int i = 0; i < vnumbers.size(); ++i)
        {
            sum=sum + vnumbers[i];

        }
        cout << sum << " m" <<endl;
    }
    

	return 0;
}