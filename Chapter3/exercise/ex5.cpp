#include <iostream>
using namespace std;
int main()
{
	long long all, usa;
	cout << "Enter the world's population: ";
	cin >> all;
	cin.get();
	cout << "Enter the population of the US: ";
	cin >> usa;
	cin.get();
	cout << "The population of the US is " << double(usa) / double(all) * 100.0;
	cout << "% of the world population." << endl;
	cin.get();
	return 0;
}