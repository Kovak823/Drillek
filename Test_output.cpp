#include "std_lib_facilities.h"

int main()
{
	int birth_year = 2001;
	cout << showbase << dec << birth_year << "\t(decimal)\n" 
		<< showbase << hex << birth_year << "\t(hexadecimal)\n" 
		<< showbase << oct << birth_year << "\t(octal)\n";

	cout << endl << dec << "Age: " << 19 << endl;

	int a, b, c, d;
	cout << "Please enter  4 numbers!" << endl;
	cin >> a >> oct >> b >> hex >> c >> d;
	cout << "\nThe first number in decimal: " << a << endl;
	cout << "The second number in octal: " << b << endl;
	cout << "The third and fourth number in hexadecimal: " << c << ", " << d<< endl;

	cout << noshowbase << dec << endl;
	cout << 1234567.89 << "\t(defaultfloat)" << endl;
	cout << fixed << 1234567.89 << "\t(fixed)" << endl;
	cout << scientific << 1234567.89 << "\t(scientific)" <<  endl;

	cout << '|' << setw(5) << "Ákos" << '|' << setw(6) << "Kovács"
	<< '|' << setw(15) << "kovcs.akos.cs@gmail.com"
	<< '|' << setw(15) << "06306421855" << endl;

	cout << '|' << setw(5) << "Botond" << '|' << setw(6) << "Barát"
	<< '|' << setw(15) << "barat.botond@gmail.com"
	<< '|' << setw(15) << "06301121845" << endl;

	cout << '|' << setw(5) << "Lajos" << '|' << setw(6) << "Király"
	<< '|' << setw(15) << "kiraly.lajos@gmail.com"
	<< '|' << setw(15) << "06405721855" << endl;

	cout << '|' << setw(5) << "Péter" << '|' << setw(6) << "Fazekas"
	<< '|' << setw(15) << "fazekas.peter@gmail.com"
	<< '|' << setw(15) << "06306421666" << endl;

	cout << '|' << setw(5) << "Máté" << '|' << setw(6) << "Magyar"
	<< '|' << setw(15) << "magyar.mate@gmail.com"
	<< '|' << setw(15) << "06306220855" << endl;



	return 0;
}