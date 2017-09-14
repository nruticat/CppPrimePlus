#include <iostream>

double exchange(double light);
using namespace std;

int main()
{
	cout << "Enter the number of light years: ";
	double light;
	cin >> light;
	cin.get();
	exchange(light);
	cin.get();
	return 0;
}

double exchange(double light)
{
	cout << light << " light years = " << light * 63240 << " astronomical units.";
	return 0;
}