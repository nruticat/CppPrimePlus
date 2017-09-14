//sqrt.cpp -- using the sqrt() function

#include <iostream>
#include <cmath>

int main()
{
	using namespace std;

	double area;
	cout << "Enter the floor area, in square feet, of your home: ";
	cin >> area;
	cin.get();
	double side;
	side = sqrt(area);
	cout << "That's the equivalent of a square " << side << " feet to the side." << endl;
	cout << "How fascinating!" << endl;
	cin.get();
	return 0;
}