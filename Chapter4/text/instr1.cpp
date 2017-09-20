//instr.cpp -- reading more than one string
#include <iostream>
using namespace std;
int main()
{
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin >> name;
	cin.get();
	cout << "Enter your favorite dessert:\n";
	cin >> dessert;
	cin.get();
	cout << "I have some delicious " << dessert;
	cout << " for you," << name << ".\n";
	cin.get();
	return 0;
}