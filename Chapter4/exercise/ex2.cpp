#include <iostream>
#include <string>
using namespace std;
int main()
{
	string name, dessert;

	cout << "Enter your name:\n";
	getline(cin, name);
	cout << "Enter your favoriate dessert:\n";
	getline(cin, dessert);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name<<".\n";
	cin.get();
	return 0;
}