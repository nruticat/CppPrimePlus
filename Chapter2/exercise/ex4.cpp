#include <iostream>
using namespace std;

int main()
{
	cout << "Enter your age: ";
	int age;
	cin >> age;
	cin.get();
	cout << "It contains " << age * 12 << " months." << endl;
	cin.get();
	return 0;
}