#include <iostream>
#include <string>
using namespace std;

int main()
{
	string FirstName, LastName, Name;
	cout << "Enter your first name: ";
	getline(cin, FirstName);
	cout << "Enter your last name: ";
	getline(cin, LastName);
	Name = LastName + ", " + FirstName;
	cout << "Here's the information in a single string: " << Name << endl;
	cin.get();
	return 0;
}