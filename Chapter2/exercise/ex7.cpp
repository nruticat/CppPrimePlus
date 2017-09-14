#include <iostream>
void time(int hour, int minute);
using namespace std;

int main()
{
	int hour;
	int minute;
	cout << "Enter the number of hours: ";
	cin >> hour;
	cin.get();
	cout << "Enter the number of minutes: ";
	cin >> minute;
	cin.get();
	time(hour, minute);
	cin.get();
	return 0;
}

void time(int hour, int minute)
{
	cout << "Time: " << hour << ":" << minute << endl;
}