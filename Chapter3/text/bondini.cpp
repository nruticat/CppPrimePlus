// bondini.cpp -- using escape sequences
#include <iostream>
using namespace std;
int main()
{
	cout << "\aOperation \"HyperHype\" is now activated!\n";
	cout << "Enter your agent code:__________\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou entered " << code << "...\n";
	cout << "\aCode berified! Proceed  with Plan Z3!\n";
	cin.get();
	cin.get();
	return 0;
}