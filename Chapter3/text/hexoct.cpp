// hexoct.cpp -- shows hex and oct literals
#include <iostream>
int main()
{
	using namespace std;
	int chest = 42;
	int waist = 0x42;
	int inseam = 042;

	cout << "Monsieur cute a striking figure\n";
	cout << "chest = " << chest << " (42 in decimal)\n";
	cout << "waist = " << waist << " (0x42 in hex)\n";
	cout << "inseam = " << inseam << " (042 in octal)\n";
	cin.get();
	return 0;
}