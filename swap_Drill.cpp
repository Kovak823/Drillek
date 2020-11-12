#include "std_lib_facilities.h"

void swap_v(int a,int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void swap_r(int& a,int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
/*
void swap_cr(const int& a, const int& b)
{
	int temp;
	int temp = a;
	a = b;
	b = temp;
}*/

int main()
{
	int x = 7;
	int y = 9;
	cout << "x: " << x << " y: " << y << endl << endl;
	swap_v(x,y);
	cout << "swap_v: " << "x: " << x << " y: " << y << endl;

	/*swap_r(7,9);//swap_r(x,y)
	cout << "swap_r: " << "x: " << x << " y: " << y << endl <<endl;
	
	double dx = 7.7;
	double dy = 9.9;
	cout << "swap_r: " << "dx: " << dx << " dy: " << dy << endl <<endl;
	swap_r(dx,dy);
	cout << "swap_r: " << "dx: " << dx << " dy: " << dy << endl;

	
	const int cx = 7;
	const int cy = 9;
	cout << "swap_cr: " << "cx: " << cx << " cy: " << cy << endl << endl;
	swap_cr(cx,cy)
	cout << "swap_cr: " << "cx: " << cx << " cy: " << cy << endl;
	
	*/



	return 0;
}