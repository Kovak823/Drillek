#include "std_lib_facilities.h"
int main()
try 
{
	cout << "Success!\n";
 	cout << "Success!\n";
	cout << "Success" << "!\n";
	cout << "Success!" << '\n';
	//5.
	int res = 7; 
	vector<int> v(10); 
	v[5] = res; 
	cout << "Success!\n";
	//6.
	vector<int> v2(10); 
	v2[5] = 7; 
	if (v2[5]==7) 
		cout << "Success!\n";
	//7.
	bool cond = true;
	if (cond) 
		cout << "Success!\n"; 
	else 
		cout << "Fail!\n";
	//8.
	bool c = true; 
	if (c) 
		cout << "Success!\n"; 
	else 
		cout << "Fail!\n";
	//9.
	string s = "ape"; 
	string c2 = "fool"; 
	if (c2 != s) 
		cout << "Success!\n";
	//10.
	string s2 = "ape"; 
	if (s2 !="fool") 
		cout << "Success!\n";
	//11.
	string s3 = "ape"; 
	if (s3!="fool") 
		cout << "Success!\n";
	//12.
	string s4 = "ape"; 
	if (s4!="fool") 
		cout << "Success!\n";
	//13.
	vector<char> v3(5); 
	for (int i=0; i<v3.size(); ++i) 
		cout <<"Success!\n";
	//14.
	vector<char> v4(5); 
	for (int i=0; i<v4.size(); ++i) 
		cout <<"Success!\n";
	//15.
	string s5 = "Success!\n"; 
	for (int i=0; i<8; ++i) 
	{
		cout << s5[i];
	}
	cout << endl;
	//16.
	if (true) 
		cout << "Success!\n"; 
	else 
		cout << "Fail!\n";
	//17.
	int x = 2000; 
	int c3 = x; 
	if (c3==2000) 
		cout << "Success!\n";
	//18.
	string s6 = "Success!\n"; 
	for (int i=0; i<8; ++i)
	{ 
		cout << s6[i];
	}
	cout << endl;
	//19.
	vector<int> v5(5); 
	for (int i=0; i<=v5.size(); ++i) 
		cout << "Success!\n";
	//20.
	int i=0; 
	int j = 9; 
	while (i<10)
	{ 
		++i; 
		if (j<i) 
		{
			cout << "Success!\n";
		}
	}
	//21.
	int x2 = 10; 
	double d = 5/(x2-2); 
	if (d!=2*x2+0.5) 
		cout <<"Success!\n";
	//22.
	string s7 = "Success!\n"; 
	for (int i=0; i<=10; ++i)
	 cout <<s7[i];
	//23.
	int i2=0; 
	while (i2<10)
	{
		++i2; 
		if (9 < i2)
		{ 
			cout << "Success!\n";
		}
	}
	//24.
	int x3 = 4; 
	double d2 = 5/(x3-2); 
	if (d2!=2*x+0.5) 
		cout << "Success!\n";
	//25.
	cout << "Success!\n";

	keep_window_open();
	return 0;
}
	catch (exception& e) {
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
	catch (...) {
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}