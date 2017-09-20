//numstr.cpp -- following number input with line input
#include <iostream>
using namespace std;
int main()
{
	cout << "What year was your house built?\n";
	int year;
	cin >> year;
	cin.get();
	cout << "What is its street address?\n";
	char address[80];
	cin.getline(address, 80);
	cout << "Year built: " << year << endl;
	cout << "Address : " << address << endl;
	cout << "Done.\n";
	cin.get();
	return 0;
}