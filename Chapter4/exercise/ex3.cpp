#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char FirstName[100], LastName[100],Name[200];
	cout << "Enter your first name: ";
	cin.getline(FirstName, 100);
	cout << "Enter your last name: ";
	cin.getline(LastName, 100);
	strcpy(Name, LastName);
	strcat(Name, ", ");
	strcat(Name, FirstName);
	cout << "Here's the information in a single string: " << Name << endl;
	cin.get();
	return 0;
}