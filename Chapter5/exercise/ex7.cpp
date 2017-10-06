#include <iostream> 
#include <string>
#include <cstring>
using namespace std;
struct carname
{
	string make;
	int years;
};

int main()
{
	cout << "How many cars do you wish to catalog? ";
	int num;
	(cin >> num).get();
	carname *record = new carname[num];
	for (int i = 0; i < num; i++)
	{
		cout << "Car #" << i + 1 << endl;
		cout << "Please enter the make: ";
		getline(cin, record[i].make);
		cout << "Please enter the year made: ";
		(cin >> record[i].years).get();
	}
	cout << "\nHere is your collection:" << endl;
	for (int i = 0; i < num; i++)
		cout << record[i].years << " " << record[i].make << endl;
	cin.get();
	delete[] record;
	return 0;
}