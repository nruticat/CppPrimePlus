#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	char FirstName[100], LastName[100];
	char grade;
	int age;
	cout << "What is your first name? ";
	cin.getline(FirstName,100);
	cout << "What is your last name? ";
	cin.getline(LastName,100);
	cout << "What letter grade do you deserve? ";
	(cin >> grade).get();
	cout << "What is your age? ";
	(cin >> age).get();
	cout << "Name: " << LastName << ", " << FirstName << endl;
	cout << "Grade: " <<char(grade+1) << endl;
	cout << "Age: " << age << endl;
	cin.get();
	return 0;
}