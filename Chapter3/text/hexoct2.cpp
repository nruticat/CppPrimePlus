// hexoct2.cpp -- display values in hex anmd octal
#include <iostream>
using namespace std;
int main()
{
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "Monsieur cuts a striking figure!" << endl;
	cout << "chest = " << chest << " (decimal for 42)\n" << endl;
	cout << hex;
	cout << "waist = " << waist << " (hexadecimal for 42)\n" << endl;
	cout << oct;
	cout << "inseam = " << inseam << " (octal for 42)\n" << endl;
	cin.get();
	return 0;
}