#include "std_lib_facilities.h"

struct Point
{
	double x;
	double y;
};

int main()
try{
	double x;
	double y;
	vector<Point> original_points;

	cout << "Please enter seven x and y pairs!" << endl;
	while(cin >> x >> y)
	{
		original_points.push_back(Point{x,y});
	}
	ofstream ost ("mydata.txt");
	if(!ost) error("Can't open mydata.txt: ");
	for(const auto& r : original_points)
	{
		ost << r.x << ',' << r.y << endl;
	}
	ost.close();

	cout << "The values of the mydata.txt:\n";
	vector<string> processed_points;
	vector<string> compare;
	string line;
	ifstream ist ("mydata.txt");
	if(!ist) error("Can't open mydata.txt: ");
	else
	{
		while(getline(ist,line))
		{
			cout << line << endl;
			processed_points.push_back(line);
		}
	}

	cout << "The values int the original vector: " << endl;
	for(const auto& r : original_points)
		cout << r.x << ',' << r.y << endl;

	cout << "The value in the processed vector: " << endl;
	for(const auto& r : processed_points)
		cout << r << ' ' << endl;
	
	compare = processed_points;
	if(processed_points != p)
		error("Something's wrong!");

	return 0;
}catch(runtime_error& e){
	cerr << "Error: " << e.what() << endl;
	return 1;
}
catch(...){
	cerr << "Some error\n";
	return 2;
}